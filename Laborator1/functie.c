#include <stdio.h>
#include <math.h>
#include "functie.h"

double f1(double x)
{
	return x;
}

double f2(double x)
{
	return sin(exp(2*x) + 3);
}

double f3(double x)
{
	return exp((-1) * pow(x, 2));
}

double f4(double x)
{
	return pow(x, 2);
}

double f5(double x)
{
	return sqrt(1.0 + 1.0/x);
}

double f6(double x)
{
	return x / (1 + x);
}
	
