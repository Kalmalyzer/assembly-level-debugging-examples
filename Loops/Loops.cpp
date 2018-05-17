// Loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Loops.h"

int printCount = 15;
const char* messagePrefix = "this is message nr ";

void printMessages(int count, const char* prefix)
{
	for (int i = 0; i < count; i++)
		printf("%s %d\n", prefix, i);
}

int main()
{
	printMessages(printCount, messagePrefix);
	
	return 0;
}

