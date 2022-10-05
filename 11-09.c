#include <stdio.h>

int search(int *A, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (A[i] == search_value) {
			return i;
		}
	}
	return -1;	// 찾는 값이 없으면 -1
}

int main()
{
	int arr[5] = { 100, 200, 500, 150, 300 };

	printf("월급이 200만원인 사람의 인덱스 = %d\n", search(arr, sizeof(arr) / sizeof(arr[0]), 200));
}

