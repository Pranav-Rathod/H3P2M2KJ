
# Write a shell script to subtract two nos.

clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number 1 : "
read num1
echo -n "Enter Number 2 : "
read num2

result=`expr $num1 - $num2`
echo "Subtraction of 2 Number is : $result"