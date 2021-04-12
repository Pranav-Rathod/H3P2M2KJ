echo -n "Enter Last Number : "
read in

# P1 : 2 5 10 17..

for((i=1;i<=$in;i++))
{
    mul=`expr $i \* $i`
    mul=`expr $mul + 1`
    echo $mul
}

echo -e "\n\n"

# P2 : 2 7 28 63..

for((i=1;i<=$in;i++))
{
    if [ `expr $i % 2` -eq 0 ]
    then
    modTwo=`expr $i \* $i \* $i`
    modTwo=`expr $modTwo - 1`
    echo $modTwo
    else
    modOne=`expr $i \* $i \* $i`
    modOne=`expr $modOne + 1`
    echo $modOne
    fi
}