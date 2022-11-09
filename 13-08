#include <stdio.h>

struct point {
	int x, y;
};

struct circle {
	struct point center;	// 원의 중심
	double radius;			// 원의 반지름
};

/*
double area(struct circle c) {
	return c.radius * c.radius * 3.14;
}

double perimeter(struct circle c) {
	return c.radius * 2 * 3.14;
}
*/

typedef struct circle CIRCLE;

double area(CIRCLE c) {
	return c.radius * c.radius * 3.14;
}

double perimeter(CIRCLE c) {
	return c.radius * 2 * 3.14;
}


int main() {
	//struct circle c = { {0, 0}, 10 };
	CIRCLE c = { {0, 0}, 10 };

	printf("원의 중심점: %d %d\n", c.center.x, c.center.y);
	printf("원의 반지름: %lf\n", c.radius);
	printf("원의 면적=%lf, 원의 둘레=%lf\n", area(c), perimeter(c));
}
