#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	// x�� y ��� ����� p_sum�� p_diff�� ����Ű�� ������ �ֱ�
	*p_sum = x + y;
	*p_diff = x - y;
}

int main() {
	int a, b;
	int* pa, pb;
	scanf("%d", &a);
	scanf("%d", &b);


}