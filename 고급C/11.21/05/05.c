#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PIE 3.14

struct point {
	int x, y;
};

typedef struct circle {
	struct point center;
	double radius;
}CIRCLE;

double area(struct circle c);

double perimeter(struct circle c);

int main()
{
	struct point p;
	CIRCLE c;

	printf("���� �߽��� : ");
	scanf("%d %d", &p.x, &p.y);
	printf("���� ������ : ");
	scanf("%lf", &c.radius);
	printf("���� ���� : %lf, ���� �ѷ� : %lf", area(c), perimeter(c));

	return 0;
}

double area(struct circle c)
{
	return c.radius * c.radius * PIE;
}

double perimeter(struct circle c)
{
	return 2 * PIE * c.radius;
}