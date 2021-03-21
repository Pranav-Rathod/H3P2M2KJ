
# Write a shell script to add 3 nos

clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number 1 : "
read num1
echo -n "Enter Number 2 : "
read num2
echo -n "Enter Number 3 : "
read num3

result=`expr $num1 + $num2 + $num3`
echo "Addition of 3 Number is : $result"