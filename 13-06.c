#include <stdio.h>

struct point {
	int x, y;
};

int equal(struct point *p1, struct point *p2) {
	if (p1->x == p2->x && p1->y == p2->y)
		return 1;
	else
		return 0;
}

int main() {
	struct point p1 = { 1, 2 };
	struct point p2 = { 3, 5 };
	struct point* pp1 = &p1;
	struct point* pp2 = &p2;

	printf("일치하면 1, 일치하지 않으면 0 \n>> %d\n", equal(pp1, pp2));
}
