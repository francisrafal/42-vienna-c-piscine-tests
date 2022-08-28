#!/bin/bash
totest="shell00"


GREEN=$'\e[0;32m'
RED=$'\e[0;31m'
NC=$'\e[0m'
function e00 {
                 e00is=$(<$1) 
                 if [[ $e00is ==  "Z" ]] 
			then
 		 echo ${GREEN}$1 "correct!"  ${NC}	
 		 else
 		 echo ${RED}$1 "NOT correct!" ${NC}	
 		
		 fi
                 
                 
           } 
echo
echo "welcome to SHELL00 evaluater script"
echo ""
echo "started testing: " $totest
echo
#cd ~  
#if [ ! -d "eva42" ] 
#then
#    mkdir eva42 
#fi
#cd eva42
echo "please run the script in shell00 project directory!"
echo
ls */*
echo
filestotal=$(ls */* | wc -l)
echo "total files in repository: "$filestotal 
   
if [[ $filestotal ==  "10" ]]; 
then
echo ${GREEN}"correct!"  ${NC}			
else
echo ${RED}"NOT correct! There should be only 10 Files" ${NC}
fi

echo
read -p "Press enter to continue..."

echo
echo "checking ex00..."
if [ -f ex00/z ]; then
   cat ex00/z
   func_result="$(e00 'ex00/z')"
   echo $func_result
fi

echo
read -p "Press enter to continue..."
echo
echo "checking ex01..."
if [ -d ex01 ]; then
   ls ex01 -l
fi
echo
echo
if [ -r ex01/testShell00.tar ]; then
cd ex01
   tar -xvf testShell00.tar
cd ..
else
echo ${RED}"ex01/testShell00/testShell00.tar NOT found" ${NC}

fi
if [ -d ex01 ]; then
   ls ex01 -l
fi
echo
perm=$(stat -c "%A" ex01/testShell00 | sed -z '$ s/\n$//')
tocheck="-r--r-xr-x"
if [[ "$perm" == "$tocheck" ]];  then
	echo ${GREEN}"ex01/testShell00 permissions: "$perm" correct!" ${NC}
else
	echo ${RED}"ex01/testShell00 permissions: "$perm" WRONG! Should be:"$tocheck ${NC}

fi
read -p "Press enter to continue..."
echo
stat=$(ls ex01 -l | grep "40 Jun 1 23:42")
if [  "$stat" ];  then
	echo ${GREEN}"ex01/testShell00 timestamp or size: correct!" ${NC}
else
	echo ${RED}"ex01/testShell00 timestamp or size: WRONG! Should be: 40 Jun 1 23:42" ${NC}

fi
read -p "Press enter to continue..."
echo
echo "checking ex02..."
#cd ../ex02
ls ex02 -l
echo
afiles=$(ls ex02 -lgo | xargs)
#echo "$afiles"
if [[ "$afiles" =~ "drwx--xr-x 2" && "$afiles" =~ "-rwx--xr-- 1" && "$afiles" =~ "dr-x---r-- 2"  && "$afiles" =~ "-r-----r-- 2"  && "$afiles" =~ "-rw-r----x 1"  && "$afiles" =~ "Jun 1 20:47 test0"  && "$afiles" =~ "4 Jun 1 21:46 test1"  && "$afiles" =~ "-r-----r-- 2"  && "$afiles" =~ "lrwxrwxrwx 1"  && "$afiles" =~ "Jun 1 22:45 test2"  && "$afiles" =~ "1 Jun 1 23:44 test3"  && "$afiles" =~ "2 Jun 1 23:43 test4"  && "$afiles" =~ " 1 Jun 1 23:44 test5"  && "$afiles" =~ "5 Jun 1 22:20 test6 -> test0"   ]];
then
    echo ${GREEN}"ex01/testShell01 everything: correct!" ${NC}
else
   echo ${RED}"ex01/testShell00 something was WRONG!" ${NC}
echo
echo "drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxrwxrwx 1 XX XX 5 Jun 1 22:20 test6 -> test0"

fi
echo
read -p "Press enter to continue..."
echo
echo "checking ex03..."
if [ -r ex03/id_rsa_pub ]; then
cat ex03/id_rsa_pub
else
 echo ${RED}"ex03/id_rsa_pub NOT found!" ${NC}
 ls ex03 -la
fi
echo
read -p "Press enter to continue..."
echo
echo "checking ex04..."
if [ -r ex04/midLS ]; then
cat ex04/midLS
else
 echo ${RED}"ex04/midLS NOT found!" ${NC}
 ls ex04 -la

fi
echo
read -p "Press enter to continue..."
echo

echo "checking ex05..."
if [ -r ex05/git_commit.sh ]; then
cat ex05/git_commit.sh
else
 echo ${RED}"ex05/git_commit.sh NOT found!" ${NC}
 ls ex05 -la

fi
echo
read -p "Press enter to continue..."

bash ./ex05/git_commit.sh
echo
read -p "Press enter to continue..."

echo
echo "checking ex06..."

if [ -r ex06/git_ignore.sh ]; then
cat ex06/git_ignore.sh
else
 echo ${RED}"ex06/git_ignore.sh NOT found!" ${NC}
 ls ex06 -la

fi
echo
read -p "Press enter to continue..."
bash ./ex06/git_ignore.sh
echo
read -p "Press enter to continue..."

echo

echo "checking ex07..."
if [ -r ex07/b ]; then
cat ex07/b

datab="$(cat ex07/b)"

if [[ "$datab" =~ "Episode V, A NEW H0PE It is a period of civil war
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. 
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet." &&  "$datab" =~ "Pursued by the Empire's sinister agents,
Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie.." ]] ;then
     echo ${GREEN}"They match"${NC}
else
    echo ${RED}"They don't match"${NC}
fi

else
 echo ${RED}"ex07/b NOT found!" ${NC}
 ls ex07 -la

fi
echo
read -p "Press enter to continue..."
echo

echo "checking ex08..."
if [ -r ex08/clean ]; then
cat ex08/clean
else
 echo ${RED}"ex08/clean NOT found!" ${NC}
 ls ex08 -la

fi
echo
read -p "Press enter to continue..."
echo

echo "checking ex09..."
if [ -r ex09/ft_magic ]; then
cat ex09/ft_magic
else
 echo ${RED}"ex09/ft_magic NOT found!" ${NC}
 ls ex09 -la

fi
echo
read -p "Press enter to continue..."
echo


echo "finished"
