#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int* A, int size) {	// A: 배열, size: 배열 크기
	int i;
	srand(time(NULL));
	for (i = 0; i < size; i++) {
		A[i] = rand();
	}
}

int main() {

	int arr[10];
	array_fill(arr, sizeof(arr)/sizeof(arr[0]));
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
