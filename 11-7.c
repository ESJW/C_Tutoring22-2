#include <stdio.h>

void array_add(int *A, int *B, int *C, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		C[i] = A[i] + B[i];
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
	int arr2[10] = { 0 };
	int arr3[10];

	array_add(arr, arr2, arr3, sizeof(arr) / sizeof(arr[0]));

	printf("A");
	array_print(arr, sizeof(arr) / sizeof(arr[0]));
	printf("B");
	array_print(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("C");
	array_print(arr3, sizeof(arr3) / sizeof(arr3[0]));
}

