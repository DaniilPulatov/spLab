#include <stdio.h>
#include <stdlib.h>

int countNegative(int arr[], int arrSize) {
	int counter = 0;
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] < 0) {
			counter += 1;
		}
	}
	return counter;
}

int countPositive(int arr[], int arrSize) {
	int counter = 0;
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] > 0) {
			counter += 1;
		}
	}
	return counter;
}

int countEven(int arr[], int arrSize) {
	int counter = 0;
	for (int i = 0; i < arrSize; i++) {
		if (arr[i]%2==0) {
			counter += 1;
		}
	}
	return counter;
}

int countOdd(int arr[], int arrSize) {
	int counter = 0;
	for (int i = 0; i < arrSize; i++) {
		if (arr[i]%2 != 0) {
			counter += 1;
		}
	}
	return counter;
}

int countPrime(int arr[], int arrSize) {
	int counter = 0;
	int holder;
	for (int i = 0; i < arrSize; i++) {
		holder = 0;
		if (arr[i] >1) {
			for (int j = 2; j * j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					holder += 1;
				}
			}
			if (holder == 0) {
				counter += 1;
			}
		}

	}
	return counter;
}
/*
int main() {
	int* arr;
	int val, n;
	printf("ENTER THE VALUE OF n: ");
	scanf_s("%d", &n);
	arr = (int*)calloc(n, sizeof(int));
	if (arr == NULL) {
		printf("ERROR: MEMORY NOT ALLOCATED.\n");
		exit(0);
	}
	for (int i = 0; i < n; i++) {
		printf("NOW ENTER THE INTEGER NUMBERS: ");
		scanf_s("%d", &val);
		arr[i] = val;
	}

	printf("NUMBER OF POSITIVE INTEGERS: %d\n", countPositive(arr, n));
	printf("NUMBER OF NEGATIVE INTEGERS: %d\n", countNegative(arr, n));
	printf("NUMBER OF ODD INTEGERS: %d\n", countOdd(arr, n));
	printf("NUMBER OF EVEN INTEGERS: %d\n", countEven(arr, n));
	printf("NUMBER OF PRIME INTEGERS: %d\n", countPrime(arr, n));


	free(arr);

	return 0;
}

*/