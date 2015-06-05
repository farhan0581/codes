# $? returns the status of the last command 0=success 1=fail
path=/home/farhan/Desktop
cd $path
if [ "$?" -eq 0 ]
	then
	echo  "yes"
else
	echo "no"
fi