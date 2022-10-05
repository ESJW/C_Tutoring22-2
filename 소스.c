#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	// x와 y 계산 결과를 p_sum과 p_diff가 가리키는 변수에 넣기
	*p_sum = x + y;
	*p_diff = x - y;
}

int main() {
	int a, b;
	int* pa, pb;
	scanf("%d", &a);
	scanf("%d", &b);


}