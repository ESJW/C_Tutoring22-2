#include <stdio.h>

int main() {
	int x = 0x12345678;				// 정수형 변수 = 4바이트
	unsigned char* xp = (char*)&x;	// 주소값은 부호가 없어서 unsigned 사용
	// 문자형 변수 = 1바이트 이므로 주소를 문자형으로 바꾸어 1바이트씩 확인하기
	printf("바이트순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);	// 16진수
}
