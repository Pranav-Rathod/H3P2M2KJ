clear
echo -e "\nPranav Rathod - 91900103062\n"

echo -n "Emter Number : "
read n

for((i=2;i<$n;i++))
{
    if [ `expr $n % $i` -eq 0 ]
    then
    echo "$n is Not a Prime Number"
    exit
    fi
}

echo "$n is a Prime Number"