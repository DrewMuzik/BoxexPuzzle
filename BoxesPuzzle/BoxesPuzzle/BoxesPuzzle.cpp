// BoxesPuzzle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

int main()
{

	int n;
	scanf("%d", &n);

	// square matrix -> length = width
	int length = n * 2 - 1;
	int *arr[length];
	// create matrix
	for (int i = 0; i < length; i++) {
		arr[i] = (int *)malloc(length * sizeof(int));
	}

	// fill up matrix in "boxes" -> less optimal from frequent array access
	// in favor of intuitiveness

	int sub = 0;
	int box = 0;
	while (box < n) {
		for (int i = box; i < length - box; i++) {
			arr[box][i] = n - box;          // fill first row
			arr[i][length - 1 - box] = n - box;     // fill last column
			arr[length - 1 - box][i] = n - box;     // fill last row
			arr[i][box] = n - box;          // fill first column
		}
		++box;
	}
	// fill center
	arr[n - 1][n - 1] = n - box + 1;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	// free up memory
	for(int i = 0; i < length; i++){
		free(arr[i]);
	}
	free(arr);
		
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
