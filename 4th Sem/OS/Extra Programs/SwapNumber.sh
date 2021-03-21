clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number 1 : "
read num1
echo -n "Enter Number 2 : "
read num2

temp=$num2
num2=$num1
num1=$temp

echo "Value of Number1 is : $num1"
echo "Value of Number2 is : $num2"