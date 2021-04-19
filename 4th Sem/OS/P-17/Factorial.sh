echo -n "Enter Number : "
read Num
fact=1
for((i=2;i<=$Num;i++))
{
    fact=$((fact*$i))
}
echo "Forward Factorial is : $fact"


fact=1
for((i=$Num;i>=1;i--))
{
    fact=$((fact*$i))
}
echo "Reverse Factorial is : $fact"


while [ $i -le $Num ]
do
    
done