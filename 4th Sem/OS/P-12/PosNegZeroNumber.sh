
# Write a shell script to find that the accepted number is Negative, or Positive or Zero

clear
echo "Name : Pranav Rathod"
echo "Enroll No. : 91900103062"

# ------------------------------------ #

echo -n "Enter Number : "
read num

if [ $num -eq 0 ]
then
echo "Number is Zero."
elif [ $num -lt 0 ]
then
echo "Number is Negative."
else
echo "Number is Positive."
fi

case $num in
   [ $num -gt 0 ])
   echo "Class : Positive"
   ;;
   [ $num -lt 0 ])
   echo "Class : 1st"
   ;;
   [ $num -eq 0 ])
   echo "Class : Distiction"
   ;;
   *) echo "Not Good"
esac