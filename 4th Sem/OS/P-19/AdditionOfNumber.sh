echo -n "Enter amount of number : "
read Num

for((i=1;i<=$Num;i++))
{
    echo -n "Enter $i Number : "
    read temp
    total=$(($total+$temp))
}
echo "Addition Using For Loop is : $total"

total=0
i=1
while [ $i -le $Num ]
do
    echo -n "Enter $i Number : "
    read temp
    total=$(($total+$temp))
    i=`expr $i + 1`
done
echo "Addition Using For Loop is : $total"