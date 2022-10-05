#include <stdio.h>
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	int temp;
	int x1, y1;

	// 큰 수가 x가 되도록
	if (x < y){
		temp = x;
		x = y;
		y = temp;
	}

	// **최대 공약수 구하기**
	// 최소 공배수 구할 때 x, y 사용해야해서 x1, y1에 복사해서 사용
	x1 = x;
	y1 = y;

	// 유클리드의 방법
	while (y1 != 0){
		temp = x1 % y1;
		x1 = y1;
		y1 = temp;
	}

	*p_gcd = x1;

	// **최소 공배수 구하기**
	*p_lcm = (x * y) / *p_gcd;
}

int main() {
	int a, b;
	int lcm, gcd;

	printf("정수를 입력하시오: ");
	scanf("%d %d", &a, &b);

	get_lcm_gcd(a, b, &lcm, &gcd);

	printf("최소공배수는 %d입니다.\n", lcm);
	printf("최대공약수는 %d입니다.", gcd);
}
