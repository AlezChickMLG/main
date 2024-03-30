#include <stdio.h>
#include <math.h>
#include "integrala.h"
#include "functie.h"

int main()
{
	double a, b;
	double (*pf)(double);
	
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	
	pf = &f6;
	
	printf("I) Valoarea integralei este %lf\n", integralaTrapez(a, b, pf));
	printf("II) Valoarea integralei este %lf\n", integralaDreptunghi(a, b, pf));
	printf("III) Valoarea integralei este %lf\n", integralaSimpson(a, b, pf));
	
	return 0;
}
