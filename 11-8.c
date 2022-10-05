#include <stdio.h>

int array_sum(int *A, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += A[i];
	}
	return sum;
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

	printf("A");
	array_print(arr, sizeof(arr) / sizeof(arr[0]));
	printf("월급의 합 = %d", array_sum(arr, sizeof(arr) / sizeof(arr[0])));
}

