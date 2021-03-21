
# Write a shell script to calculate simple interest

clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Principal Amount : "
read P
echo -n "Enter Rate : "
read R
echo -n "Enter year : "
read N

I=`expr $P \* $R \* $N`
I2=`expr $I / 100`

echo "Simple interest is : $I2"