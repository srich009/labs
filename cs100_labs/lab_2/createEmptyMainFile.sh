#!/bin/sh

# create an empty main file with personal info

touch main.cc
cat Sean_861196401.txt >>  main.cc
echo "int main(int argc, const char** argv)" >> main.cc
echo "{}" >> main.cc

