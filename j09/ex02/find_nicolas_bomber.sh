cat $1 | grep -i 'nicolas\bomber' | sed -e "s/[^0-9]//g"
