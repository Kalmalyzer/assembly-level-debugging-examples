// BuggyFibonacciSequenceGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void setupResultPointers(int* results, int** resultPointers, int count)
{
	for (int i = 0; i < count; i++)
		resultPointers[i] = &results[i];
}

void generateFibonacciValue(int* result, int previous1, int previous2, int depth, int maxDepth)
{
	int newValue = (previous1 + previous2);
	*result++ = newValue;
	if (depth < maxDepth)
		generateFibonacciValue(result, previous2, newValue, depth + 1, maxDepth);
}

void generateFibonacciSequence(int* results, int count)
{
	results[0] = 1;
	results[1] = 2;
	generateFibonacciValue(&results[2], 1, 2, 0, count * 3);
}

void printValues(int** values, int count)
{
	for (int i = 0; i < count; i++)
		printf("values[%d] = %d\n", i, *values[i]);
}

int main()
{
	enum { NumValues = 10 };

	int fibonacciSequence[NumValues];
	int* fibonacciResults[NumValues];

	setupResultPointers(fibonacciSequence, fibonacciResults, NumValues);

	generateFibonacciSequence(fibonacciSequence, NumValues);

	printValues(fibonacciResults, NumValues);

	return 0;
}
