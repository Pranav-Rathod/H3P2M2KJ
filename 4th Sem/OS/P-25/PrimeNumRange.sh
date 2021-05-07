clear
echo -e "\nPranav Rathod - 91900103062\n"

echo -n "Enter limit : "
read n
m=2

while [ $m -le $n ]
do
  i=2
  flag=0
  while [ $i -lt $m ]
  do
    if [ `expr $m % $i` -eq 0 ]
    then
      flag=1
      break
    fi
    i=`expr $i + 1`
  done
  if [ $flag -eq 0 ]
  then
    echo $m
  fi
  m=`expr $m + 1`
done