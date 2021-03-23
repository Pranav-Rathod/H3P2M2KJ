
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

clear

echo -e "\n\nYour name is : $name"
echo "Your Enroll No. is : $EnRoll"


echo -e "\n:: Your obtained marks are below ::"
echo "Computer : $computer out of 100"
echo "English : $English out of 100"
echo "Science : $Science out of 100"

total=`expr $computer + $English + $Science`
Per=`expr $total / 3`
SPI=`expr $Per / 10`


echo -e "\nTotal Marks : $total out of 300"
echo "Percentage : $Per %"

if [ $Per -ge 70 ]
then
echo "Class : Distiction"
elif [ $Per -ge 60 ]
then
echo "Class : 1st"
elif [ $Per -ge 50 ]
then
echo "Class : 2nd"
else
echo "Class : Not Good"
fi

case $Per in
   5[0-9])
   echo "Class : 2nd"
   ;;
   6[0-9])
   echo "Class : 1st"
   ;;
   7[0-9]|8[0-9]|9[0-9]|100)
   echo "Class : Distiction"
   ;;
   *) echo "Not Good"
esac