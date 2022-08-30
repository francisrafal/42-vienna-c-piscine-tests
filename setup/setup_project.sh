#!/bin/bash

# This script creates the required folders and files for your Piscine Project
# Put this file into the empty root of your repo
# Execute this script with "bash setup_project.sh <C_PROJECT_NUM>" 
# 	<C_PROJECT_NUM> should be a number from 0 to 13
#	e.g. "bash setup_project.sh 0" for project c_00
# (without quotation marks)

if [ -z "$1" ]
  then
    echo "USAGE: 42setup X"
    echo "X is a number from 0-13, i.e. to setup Project c03 type 42setup 3"
    exit 1
fi

# Download document by project number
c_project_num=`expr $1 \* 2 + 58642`
if [[ $c_project_num -gt 0 ]]
then
  curl -o en.subject.pdf -bqc https://cdn.intra.42.fr/pdf/pdf/$c_project_num/en.subject.pdf;
  while [ ! -f ./en.subject.pdf ]; do sleep 3; done  #sleep 3 instead 1 as sometimes computer/connection is slow
fi

# Create Directories
mkdir `pdftotext en.subject.pdf \
&& more en.subject.txt \
| grep "Turn-in directory" \
| tr -d ' ' \
| awk -F: '{print $2}' \
| tr '\n' " "`

# Create Files
files=$(more en.subject.txt \
| grep "Turn-in directory\|Files to turn in" \
| tr -d ' ' \
| awk -F: '{print $2 "}"}' \
| tr -d '\n' \
| sed 's/}ex/} ex/g' \
| sed 's/\//\/\{/g' \
| sed 's/{}/{/g' \
| sed 's/{\([^,}]*\)}/\1/g') 

eval "touch $files"

for file in **/*.c; do [[ -f "$file" ]] && vim -c Stdheader -c wq "$file"; done
for file in **/*.h; do [[ -f "$file" ]] && vim -c Stdheader -c wq "$file"; done

# Remove Temporary Data
rm en.subject.txt
rm en.subject.pdf

# Create .gitignore file

echo -e "main.c\ntest.sh\nsetup_project.sh\nen.subject.pdf\ntests/\ntests/*" > .gitignore

ls */*
echo "Please check also manually if all files are created correctly"
echo "as sometimes some files may miss.."
