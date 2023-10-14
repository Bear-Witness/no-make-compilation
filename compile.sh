#!/bin/bash
# exit in error
set -e


echo "Compiling libraries"
echo

mkdir -p obj


libs=$(find ./src/ -regex '.*\.c$')
for lib in "${libs[@]}"
do
	filename=$(basename ${lib} | sed -E 's/^(.*)\.c$/\1/')
	echo 'Compiling file:' ${filename}.c
	gcc -c ${lib} -o obj/${filename}.o
done

echo "Compiling main code"
rm -f obj/main
gcc $(find obj/ -type f) main.c -o obj/main


