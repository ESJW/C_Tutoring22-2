#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct email {
	char title[100];
	char sender[50];
	char receiver[50];
	char content[500];
	char date[10];
	int priority;
};

int main() {
	struct email e1;
	
	strcpy(e1.title, "안부 메일");
	strcpy(e1.receiver, "chulsoo@hankuk.ac.kr");
	strcpy(e1.sender, "hsh@hankuk.ac.kr");
	strcpy(e1.content, "안녕하십니까? 별일 없으신지요?");
	strcpy(e1.date, "2010/9/1");
	e1.priority = 1;

	printf("제목: %s\n", e1.title);
	printf("수신자: %s\n", e1.receiver);
	printf("발신자: %s\n", e1.sender);
	printf("내용: %s\n", e1.content);
	printf("날짜: %s\n", e1.date);
	printf("우선순위: %d\n", e1.priority);
}
