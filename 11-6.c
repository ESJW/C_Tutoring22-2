#include <stdio.h>

void array_copy(int *A, int *B, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		B[i] = A[i];
	}
}

void array_print(int* A, int size) {
	int i;
	printf("[] = { ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}

int main()
{
	int arr[10] = { 1, 2, 3, 4 };
	int arr2[10];

	array_copy(arr, arr2, sizeof(arr) / sizeof(arr[0]));

	printf("A");
	array_print(arr, sizeof(arr) / sizeof(arr[0]));
	printf("B");
	array_print(arr2, sizeof(arr2) / sizeof(arr2[0]));
}

