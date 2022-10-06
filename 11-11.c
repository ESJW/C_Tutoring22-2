#include <stdio.h>
void merge(int* A, int* B, int* C, int size)
{
	int i = 0, j = 0, k = 0;
	while (i < size && j < size) {
		if (A[i] < B[j]) {
			C[k++] = A[i++];
		}
		else {
			C[k++] = B[j++];
		}
	}

	// 남아있는 요소들 전부 C[]로 이동
	while (i < size || j < size) {
		if (i < size) {	// A[]에 값이 남아있으면
			C[k++] = A[i++];
		}
		else if (j < size) {	// B[]에 값이 남아있으면
			C[k++] = B[j++];
		}
	}
}

void array_print(int* A, int size) {
	int i;
	printf("[] =  ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main()
{
	int arr[4] = { 2, 5, 7, 8 };
	int arr2[4] = { 1, 3, 4, 6 };
	int arr3[100];

	merge(arr, arr2, arr3, sizeof(arr) / sizeof(arr[0]));

	printf("A");
	array_print(arr, sizeof(arr) / sizeof(arr[0]));
	printf("B");
	array_print(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("C");
	array_print(arr3, sizeof(arr) / sizeof(arr[0]) * 2);
}
