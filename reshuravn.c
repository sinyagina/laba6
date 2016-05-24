#include <stdio.h>
#include <math.h>

void resh(double a, double b, double c)
{
	double d, x1, x2;
	d = b * b - 4 * a * c;
	if (d < 0)
	{
		printf("net kornei");
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		printf("koren: %lf", x1);
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("koren: %lf %lf", x1, x2);
	}
}

int main()
{
	double a, b, c;
	printf("vvedite a b c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	resh(a, b, c);
	return 0;
}