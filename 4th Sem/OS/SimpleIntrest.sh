clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo "Enter Principal Amount : "
read P
echo "Enter Rate : "
read R
echo "Enter year : "
read N

I=`expr $P \* $R \* $N`
I2=`expr $I / 100`

echo "Simple interest is : $I2"