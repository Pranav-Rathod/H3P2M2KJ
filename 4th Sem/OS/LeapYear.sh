clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Year : "
read year

if [ `expr $year % 4` -eq 0 -o `expr $year % 400` -eq 0 ]
then
echo "Yes, Year is Leap Year"
else
echo "No, Year is not a Leap Year"
fi