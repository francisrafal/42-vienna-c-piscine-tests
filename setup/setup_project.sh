#!/bin/bash

# Put this file into the root of your repo
# Put the instructions file en.subject.pdf into the root of your repo
# Execute this script with "bash setup_project.sh en.subject.pdf" 
# (without quotation marks)

# Create Directories
mkdir `pdftotext $1 \
&& more en.subject.txt \
| grep "Turn-in directory" \
| tr -d ' ' \
| awk -F: '{print $2}' \
| tr '\n' " "`

# Create Files
touch `more en.subject.txt \
| grep "Turn-in directory\|Files to turn in" \
| tr -d ' ' \
| awk -F: '{print $2}' \
| tr -d '\n' \
| sed 's/ex/ ex/g'`

# Remove Temporary Data
rm en.subject.txt

# Create .gitignore file

echo -e "main.c\ntest.sh\nsetup_project.sh\nen.subject.pdf" > .gitignore
