#include <stdio.h>
#include <math.h>

int resh(double a, double b, double c, double *d, double *x1, double *x2)
{
	*d = b * b - 4 * a * c;
	if (a == 0)
	{
		printf("koefficient A dolzhen byt ne raven 0.\n");
		return -1;
	}

	printf("discriminant: %lf\n", *d);

	if (*d < 0)
	{
		printf("net kornei");
		return 0;
	}
	else if (*d == 0)
	{
		*x1 = -b / (2 * a);
		printf("koren: %lf", *x1);
		return 1;
	}
	else if (*d > 0)
	{
		*x1 = (-b + sqrt(*d)) / (2 * a);
		*x2 = (-b - sqrt(*d)) / (2 * a);
		printf("koren: %lf %lf", *x1, *x2);
		return 2;
	}
}
