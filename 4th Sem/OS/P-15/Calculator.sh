
clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number 1 : "
read num1
echo -n "Enter Number 2 : "
read num2

echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo -n "Enter Your Choice : "
read choice

case $choice in
1)
sum=`expr $num1 + $num2`
echo "Addition is : $sum"
;;
2)
sub=`expr $num1 - $num2`
echo "Subtraction is : $sub"
;;
3)
mul=$(($num1 * $num2))
echo "Multiplication is : $mul"
;;
4)
div=`expr $num1 / $num2`
echo "Division is : $div"
;;
*) echo "Enter Valid input..!"
esac