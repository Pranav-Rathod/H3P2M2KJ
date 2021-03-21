clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number 1 : "
read num1

# if [ $num1 -ge 50 ] -a [ $num1 -ge 100 ]
if [ $num1 -ge 50 -a $num1 -le 100 ]
then
echo "Yes, Number is in Range"
else
echo "No, Number is not in Range"
fi