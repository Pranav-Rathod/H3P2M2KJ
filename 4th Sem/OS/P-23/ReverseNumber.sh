clear
echo -e "\nPranav Rathod - 91900103062\n"

echo -n "Enter Number : "
read n

tmp=0
rev=0

while [ $n -ne 0 ]
do
    tmp=`expr $n % 10`
    rev=`expr $rev \* 10 + $tmp`
    n=`expr $n / 10`
done

echo "Reverse is : $rev"