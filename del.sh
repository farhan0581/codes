#provide any valid path to the directory
path=/home/farhan/Desktop/codes
c=0
d=0
cd $path
for file in *
do
	if [[ -f $file ]]
	then
		if [[ $file == *.exe ]]    #comparisons are done in double brackets(for bash)--more features than sh
		then
		c=`expr $c + 1`
		rm -v "$file"    #file name enclosed in "" so that spaces do not hinder in deletion ,,if name starts with - use ./before file name
		fi

	elif [[ -d $file ]]
		then
		cd $file
		d=`expr $d + 1`
		for sfile in *
		do
			if [[ -f $sfile ]]
				then
				if [[ $sfile == *.exe ]]
					then
					c=`expr $c + 1`
					rm -v  "$sfile"
					fi
				fi
			# rm *.exe
		done
		cd ..
	fi	
done

echo $c 
echo $d
