#include <stdio.h>
#include <string.h>

struct info {
	char name[10];
	char home[10];
	char cell[10];
};

struct info add_info(struct info i){
	printf("이름을 입력하시오:");
	scanf("%s", i.name);
	printf("집전화번호를 입력하시오:");
	scanf("%s", i.home);
	printf("휴대폰번호를 입력하시오:");
	scanf("%s", i.cell);

	return i;
}

int main() {
	struct info list[3];
	char search_name[10];
	int i;

	for (i = 0; i < 3; i++) {
		list[i] = add_info(list[i]);
	}

	printf("검색할 이름을 입력하시오:");
	scanf("%s", search_name);

	for (i = 0; i < 3; i++) {
		if (strcmp(search_name, list[i].name) == 0) {
			printf("집전화번호: %s\n", list[i].home);
			printf("휴대폰번호: %s\n", list[i].cell);
			return 0;
		}
	}
}
