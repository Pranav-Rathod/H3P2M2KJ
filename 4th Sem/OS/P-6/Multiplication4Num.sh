
# Write a shell script to multiply four nos.

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
echo -n "Enter Number 4 : "
read num4

result=$(($num1 * $num2 * $num3 * $num4))
echo "Multiplication of 4 Number is : $result"