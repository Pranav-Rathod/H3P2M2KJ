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
echo "largest number is : $num1"
echo "smallest number is : $num2"
else
echo "largest number is : $num2"
echo "smallest number is : $num1"
fi

# ------------------------------------ #

:'
#! For Only if Condition :-
if [ condition ]
then
echo "Some statment"
fi

#! For if-elif :-
if [ condition ]
then
echo "Some statment"
elif [ condition ]
then
echo "Some statment"
else
echo "Some statment"
fi

#! For if-else :-
if [ condition ]
then
echo "Some statment"
else
echo "Some statment"
fi
'