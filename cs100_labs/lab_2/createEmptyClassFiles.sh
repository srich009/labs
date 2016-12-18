#!/bin/sh

#create header and source files
touch "$1".cc
touch "$1".h

#put personal info
cat Sean_861196401.txt >> $1.cc
cat Sean_861196401.txt >> $1.h

#echo for header
echo "
#ifndef $1_hh
#define $1_hh

class $1
{
	public:
	$1();
	~$1();

	private:
};
#endif" >> $1.cc

#echo for source
echo "
#include \"$1.hh\"

$1::$1()
{}

$1::~$1()
{}
" >> $1.h

