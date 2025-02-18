#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


int splitArray(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low-1;
	int j;
	for (j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);

	return i + 1;
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int devisionIndex = splitArray(arr, low, high);
		quickSort(arr, low, devisionIndex-1);
		quickSort(arr, devisionIndex + 1, high);
	}
}

void showAscendingOrder(int arr[], int arrlen) {
	for (int i = 0; i < arrlen; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void showDescendingOrder(int arr[], int arrlen) {
	for (int i = arrlen-1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
/*
int main() {

	int* arr;
	int n, val;
	printf("ENTER THE VALUE OF n: ");
	scanf_s("%d", &n);

	arr = (int*)calloc(n, sizeof(int));

	if (arr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}

	for (int i = 0; i < n; i++) {
		printf("NOW ENTER THE INTEGER NUMBERS: ");
		scanf_s("%d", &val);
		arr[i] = val;
	}

	quickSort(arr, 0, n - 1);
	showAscendingOrder(arr, n);
	showDescendingOrder(arr, n);

	free(arr);
	return 0;
}

*/