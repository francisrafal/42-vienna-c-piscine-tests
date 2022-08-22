#!/bin/bash

# Put this file into the root folder of your repo

BLUE='\033[0;36m'
NC='\033[0m' # No Color

if [ $# -eq 0 ]; then
	for i in {00..08}
	do
		echo -e "\n${BLUE}+++ TEST +++${NC}"
		gcc -Wall -Wextra -Werror testhelpers.c test_ex$i.c
		./a.out
		rm ./a.out
	done
	echo -e "\n${BLUE}+++ NORMINETTE +++${NC}"
	norminette -R CheckForbiddenSourceHeader ../ex*/*.c
	echo -e "\n${BLUE}+++ FILES IN REPO +++${NC}"
	cd ..
	git ls-files
	cd tests
elif [ ${#1} -eq 2 ] && [ $1 -eq $1 ]; then
	echo -e "\n${BLUE}+++ TEST +++${NC}"
	gcc -Wall -Wextra -Werror testhelpers.c test_ex$1.c
	./a.out
	echo -e "\n${BLUE}+++ NORMINETTE +++${NC}"
	norminette -R CheckForbiddenSourceHeader ../ex$1/*.c
	echo -e "\n${BLUE}+++ FILES IN REPO +++${NC}"
	cd ..
	git ls-files
	cd tests
	rm ./a.out
else
	echo -e "Usage:\nbash test.sh [num]"
	echo -e "num ... exercise number you want to test in format XX, e.g. bash test.sh 00 for ex00"
	echo -e "If no argument is provided, all tests will be executed"
fi

