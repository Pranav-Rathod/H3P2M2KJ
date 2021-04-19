echo "1. Copy a file"
echo "2. Remove a file"
echo "3. Move a file"
echo "4. Quit"
echo -n "Enter Choice : "
read input

case $input in
1)
echo -n "Enter Source File : "
read srcFile
echo -n "Enter Destination File : "
read dstFile
cp $srcFile $dstFile
echo "Copied Done..!"
;;
2)
echo -n "Enter File Name : "
read rmFile
rm $rmFile
echo "Removed..!"
;;
3)
echo -n "Enter File Name : "
read fileName
echo -n "Enter Destination Path : "
read destName
mv $fileName $destName
echo "Moved..!"
;;
4)
echo "Exiting..!"
exit
;;
esac