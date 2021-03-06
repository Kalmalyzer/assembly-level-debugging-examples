// Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void generateSquares(int* squares, int numSquares)
{
	for (int i = 0; i < numSquares; i++)
		squares[i] = i * i;
}

void printValues(int* values, int count)
{
	for (int i = 0; i < count; i++)
		printf("values[%d] = %d\n", i, values[i]);
}

int main()
{
	int numSquares = 10;

	int* squares = new int[numSquares];

	generateSquares(squares, numSquares);

	printValues(squares, numSquares);

    return 0;
}

