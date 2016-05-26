#include <stdio.h>
#include "uravn.h"

int main()
{
	int resultat;
	double a, b, c, d, x1, x2;
	printf("vvedite a b c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	resultat = resh(a, b, c, &d, &x1, &x2);

	if (resultat == -1)
	{
		printf("koefficient A dolzhen byt ne raven 0.\n");
		return 0;
	}

	printf("discriminant: %lf\n", d);

	if (resultat == 0)
		printf("net kornei");
	else if (resultat == 1)
		printf("koren: %lf", x1);
	else if (resultat == 2)
		printf("koren: %lf %lf", x1, x2);

	return 0;
}