// PROG71040 W22 - Week03
//
// a simple program to demonstrate/showcase the gdb debugger
// compile using Makefile or
// gcc -g -Wall -o debug debug.c
//
// Professor SteveH

#include <stdio.h>
#include <string.h>

#define MAX	25

int myFunc(char *name)
{
	char localname[MAX];
	strncpy(localname, name, MAX);
	return strlen(localname);
}

int main(int argc, char** argv)
{
	int i=0;

	int j = myFunc("steve");

	printf("Hello world %d, %d\n", i, j);

	j = myFunc("david");

	return 0;
}

