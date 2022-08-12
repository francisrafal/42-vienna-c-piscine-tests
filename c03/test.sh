#!/bin/bash

# Put this file into the root folder of your repo

BLUE='\033[0;36m'
NC='\033[0m' # No Color

echo -e "\n${BLUE}+++ MAIN +++${NC}" \
&& gcc -Wall -Wextra -Werror main.c -lbsd \
&& ./a.out \
&& echo -e "\n${BLUE}+++ NORMINETTE +++\n${NC}" \
&& norminette -R CheckForbiddenSourceHeader ex*/ft* \
&& rm ./a.out \
&& echo -e "\n${BLUE}+++ FILES IN REPO +++\n${NC}" \
&& git ls-files 
