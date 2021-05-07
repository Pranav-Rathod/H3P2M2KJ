clear
echo -e "\nPranav Rathod - 91900103062\n"

echo "Enter File Name : "
read file
echo $file | awk '{a[i++]=$0}END{for(j=i-1;j>=0;j--)print a[j];}' $file