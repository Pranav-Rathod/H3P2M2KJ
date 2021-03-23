
# Write a shell script to find that the accepted number is Negative, or Positive or Zero

clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number : "
read num

if [ $num -eq 0 ]
then
echo "Using if-elif - Number is Zero."
elif [ $num -lt 0 ]
then
echo "Using if-elif - Number is Negative."
else
echo "Using if-elif - Number is Positive."
fi

case $num in
   [0])
   echo "Using Switch Case - Number is Zero."
   ;;
   [+$num])
   echo "Using Switch Case - Number is Positive"
   ;;
   -[$num])
   echo "Using Switch Case - Number is Negative"
   ;;
   *) echo "Wrong input..!"
esac