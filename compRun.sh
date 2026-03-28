#!/bin/bash

#get the C code
echo "enter C document:"
read Cdoc

g++ $Cdoc -o tmpCompiledCode
./tmpCompiledCode
rm tmpCompiledCode
