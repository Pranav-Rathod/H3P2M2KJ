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

if [ $num1 -gt $num2 -a $num1 -gt $num3 ]
then
echo "Number 1 is Largest"
elif [ $num2 -gt $num1 -a $num2 -gt $num3 ]
then
echo "Number 2 is Largest"
else
echo "Number 3 is Largest"
fi

if [ $num1 -lt $num2 -a $num1 -lt $num3 ]
then
echo "Number 1 is Lowest"
elif [ $num2 -lt $num1 -a $num2 -lt $num3 ]
then
echo "Number 2 is Lowest"
else
echo "Number 3 is Lowest"
fi