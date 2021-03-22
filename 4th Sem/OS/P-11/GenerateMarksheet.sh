
# Write a shell script to generate marksheet of a student. Take 3 subjects, calculate and
# display total marks, percentage and Class obtained by the student.

clear

echo -n "Enter Your Name : "
read name
echo -n "Enter Your Enroll No. : "
read EnRoll

echo -n "Enter Marks of Computer Subject : "
read computer
echo -n "Enter Marks of English Subject : "
read English
echo -n "Enter Marks of Science Subject : "
read Science

echo -e "\n\nYour name is : $name"
echo "Your Enroll No. is : $EnRoll"

clear

echo -e "\n:: Your obtained marks are below ::"
echo "Computer : $computer out of 100"
echo "English : $English out of 100"
echo "Science : $Science out of 100"

total=`expr $computer + $English + $Science`
Per=`expr $total / 3`

echo -e "\nTotal Marks : $total out of 300"
echo "Percentage : $Per %"

if [ $total -lt 70]
then
echo "Class : Distiction"
elif [ $total -lt 60]
then
echo "Class : 1st"
elif [ $total -lt 50]
then
echo "Class : 2nd"
else
echo "Class : Fail"
fi