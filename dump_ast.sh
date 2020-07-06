#!/bin/sh

for file in ./tree_src/*.c

do
	fileName=$(echo "$file" | rev | cut -d"/" -f1 | rev | cut -d"." -f1)
	echo "$fileName"
	clang -cc1 -ast-dump "$file" > ./test_ast/"$fileName"_AST.txt
done
























 










