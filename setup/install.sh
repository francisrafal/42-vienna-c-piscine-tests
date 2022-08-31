#!/bin/bash
echo "This script will install/update the 42-vienna-c-piscine-tests"
echo "Installation directory: $HOME/42-vienna-c-piscine-tests"
echo 
read -p "Are you sure? (y/n) " -n 1 -r
echo    # (optional) move to a new line

if [[ $REPLY =~ ^[Yy]$ ]]
then

cd "$HOME" || exit

rm -rf 42-vienna-c-piscine-tests/.git

mkdir temp_____

cd temp_____ || exit
rm -rf 42-vienna-c-piscine-tests

# download github
# git clone --recursive https://github.com/francisrafal/42-vienna-c-piscine-tests.git #main repo
git clone --recursive https://github.com/hubble42/42-vienna-c-piscine-tests.git  #fork repo

cp -r 42-vienna-c-piscine-tests ..

cd "$HOME" || exit
rm -rf temp_____

cd "$HOME"/42-vienna-c-piscine-tests || exit

chmod 755 "$HOME"/42-vienna-c-piscine-tests/setup/install.sh
chmod 755 "$HOME"/42-vienna-c-piscine-tests/setup/setup_project.sh
chmod 755 "$HOME"/42-vienna-c-piscine-tests/tester.sh

RC_FILE="$HOME/.zshrc" # MAC

if [ "$(uname)" != "Darwin" ]; then
	RC_FILE="$HOME/.bashrc" # LINUX
	if [[ -f "$HOME/.zshrc" ]]; then
		RC_FILE="$HOME/.zshrc"
	fi
fi

echo "try to add alias in file: $RC_FILE"

# set up the alias
if ! grep "42tester=" "$RC_FILE" &> /dev/null; then
	echo "42tester alias not present"
	eval "alias 42tester=$HOME/42-vienna-c-piscine-tests/tester.sh"
	printf "\nalias 42tester=%s/42-vienna-c-piscine-tests/tester.sh\n" "$HOME" >> "$RC_FILE"
fi

if ! grep "42update=" "$RC_FILE" &> /dev/null; then
	echo "42update alias not present. Adding it"
	eval "alias 42update=$HOME/42-vienna-c-piscine-tests/setup/install.sh"
	printf "\nalias 42update=%s/42-vienna-c-piscine-tests/setup/install.sh\n" "$HOME" >> "$RC_FILE"
fi

if ! grep "42setup=" "$RC_FILE" &> /dev/null; then
	echo "42setup alias not present. Adding it"
	eval "alias 42setup=$HOME/42-vienna-c-piscine-tests/setup/setup_project.sh"
	printf "\nalias 42setup=%s/42-vienna-c-piscine-tests/setup/setup_project.sh\n" "$HOME" >> "$RC_FILE"
fi

echo -en "\nUSAGE: type 42tester in command line (i.e. in Directory c00 or c01) \nto run a test\n\nTo update the script, just type 42update\n\nTo setup a project, 42setup X , where X is project no, i.e. 2 for C02"
echo -en "\nPlease close this terminal window and open the terminal again for script to work\n"
echo "Install/Update finished."

else
    echo "User selected No, exiting"
fi
