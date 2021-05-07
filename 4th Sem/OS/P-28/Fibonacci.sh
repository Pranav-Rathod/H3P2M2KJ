clear
echo -e "\nPranav Rathod - 91900103062\n"

echo -n "Enter number of terms : "
read num

# x=0
# y=1
# i=2

x=1
y=1
i=2

echo "Fibbonaci Series is : "

echo -n "$x"
echo -n " $y"

while [ $i -lt $num ]
do
    i=`expr $i + 1`
    z=`expr $x + $y`
    echo -n " $z"
    x=$y
    y=$z
done
echo -e "\n"