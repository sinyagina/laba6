#include <stdio.h>
#include <math.h>

void resh(double a, double b, double c, double *d, double *x1, double *x2)
{
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
