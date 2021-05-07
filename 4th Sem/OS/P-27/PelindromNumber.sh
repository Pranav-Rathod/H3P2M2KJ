clear
echo -e "\nPranav Rathod - 91900103062\n"

echo -n "Emter Number : "
read n

orignal=$n
tmp=0
rev=0

while [ $n -gt 0 ]
do
    tmp=`expr $n % 10`
    rev=`expr $rev \* 10 + $tmp`
    n=`expr $n / 10`
done

if [ $orignal -eq $n ]
then
echo "Number is Pelindrome"
else
echo "Number is Not Pelindrome"
fi