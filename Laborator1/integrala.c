#include <stdio.h>
#include "integrala.h"


double integralaTrapez (double a, double b, double (*pf)(double))
{
	if((b - a) < dx)
		return (b - a) * ((*pf)(a) + (*pf)(b)) / 2.0;
	else
	{
		double c = (a + b) / 2.0;
		return integralaTrapez(a, c, pf) + integralaTrapez(c, b, pf);
	}	
}

double integralaDreptunghi (double a, double b, double (*pf)(double))
{
	double sum = 0;
	double x;
	double eps = (b - a) / 10000;
	
	for(x = a; x < b; x += eps)
		sum += (*pf)(x);
	sum *= eps;
	
	return sum;
}

double integralaSimpson (double a, double b, double (*pf)(double))
{
	double sum = 0, eps = (b - a) / 100000, k;
	int x;
	
	sum = (*pf)(a) + (*pf)(b);
	
	for(x = 1; x <= 99999; x++)
	{
		k = a + x * eps;
		if(x % 2 == 0)
			sum += 2 * (*pf)(k);
		else
			sum += 4 * (*pf)(k);
	}
	sum *= eps/3;
	
	return sum;
}
