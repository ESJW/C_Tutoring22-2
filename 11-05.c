#include <stdio.h>
#define STUDENT 10

void convert(double* grades, double* scores, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		scores[i] = grades[i] * 100 / 4.3;
	}
}

int main()
{
	double x[STUDENT];
	double y[STUDENT];
	int i;


	for (i = 0; i < STUDENT; i++)
	{
		scanf("%lf", &x[i]);
	}
	convert(x, y, STUDENT);

	for (i = 0; i < STUDENT; i++)
	{
		printf("%.2lf ", y[i]);
	}
}

