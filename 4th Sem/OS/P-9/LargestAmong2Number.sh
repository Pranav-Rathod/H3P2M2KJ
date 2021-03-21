
# Write a shell script to find greater from two numbers

clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number 1 : "
read num1
echo -n "Enter Number 2 : "
read num2

if [ $num1 -gt $num2 ]
then
echo "Number 1 is Largest"
else
echo "Number 2 is Largest"
fi