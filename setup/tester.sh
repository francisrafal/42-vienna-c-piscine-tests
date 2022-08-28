#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
current_dir=$PWD
parentdir="$(dirname "$(pwd)")"

foldername="$(basename "$PWD")" 
echo $DIR
echo $parentdir
echo $current_dir
if [[ -f "./ex01/ft_print_alphabet.c" || "${foldername,,}" == "c00"  ]]; then 
    echo "Sorry, currently no test exists for c00"

elif [[ -f "./ex00/ft_ft.c" || "${foldername,,}" == "c01" ]]; then 
    echo "Testing c01"
cp $DIR/c01/main.c $current_dir/main.c
cp $DIR/c01/test.sh $current_dir/test.sh
eval "bash $current_dir/test.sh"
rm $current_dir/test.sh
rm $current_dir/main.c
elif [[ -f "./ex01/ft_strncpy.c" || "${foldername,,}" == "c02" ]]; then 
    echo "Testing c02"
cp $DIR/c02/main.c $current_dir/main.c
cp $DIR/c02/test.sh $current_dir/test.sh
eval "bash $current_dir/test.sh"
rm $current_dir/test.sh
rm $current_dir/main.c
elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "c03" ]]; then 
    echo "Testing c03"
cp -R $DIR/c03/tests $current_dir
cd $current_dir/tests
eval "bash $current_dir/tests/test.sh"
rm -rf $current_dir/tests
elif [[ -f "./ex00/ft_strlen.c" || "${foldername,,}" == "c04" ]]; then 
    echo "Testing c04"
elif [[ -f "./ex00/ft_iterative_factorial.c" || "${foldername,,}" == "c05" ]]; then 
    echo "Testing c05"
elif [[ -f "./ex00/ft_print_program_name.c" || "${foldername,,}" == "c06" ]]; then 
    echo "Testing c06"
elif [[ -f "./ex00/ft_strdup.c" || "${foldername,,}" == "c07" ]]; then 
    echo "Testing c07"
elif [[ -f "./ex01/ft_boolean.h" || "${foldername,,}" == "c08" ]]; then 
    echo "Testing c08"
elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "c09" ]]; then 
    echo "Sorry, currently no test exist for c09"
elif [[ -f "./ex00/libft_creator.sh" || "${foldername,,}" == "c10" ]]; then 
    echo "Sorry, currently no test exists for c10"
elif [ -f "${foldername,,}" == "c11" ]; then 
    echo "Sorry, currently no test exists for c11."
elif [ -f "${foldername,,}" == "c12" ]; then 
    echo "Sorry, currently no test exists for c12."
elif [ -f "${foldername,,}" == "c13" ]; then 
    echo "Sorry, currently no test exists for c13"
elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "shell00" || "${foldername,,}" == "shell_00" ]]; then 
    echo "Testing shell00"
elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "shell01" || "${foldername,,}" == "shell_01"  ]]; then 
    echo "Testing shell01."
else 
    echo "Please run it inside the directory where your exercise is, i.e. c01"
fi