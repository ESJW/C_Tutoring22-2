#include <stdio.h>

void array_print(int* A, int size) {	// A: 배열, size: 배열 크기
	int i;
	printf("A[] = { ");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}

int main() {

	int arr[10] = { 1, 2, 3, 4 };
	array_print(arr, sizeof(arr)/sizeof(arr[0]));
	
}
