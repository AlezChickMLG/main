#ifndef I_H_
#define I_H_
#define dx 0.001
#define dxS

double integralaTrapez (double a, double b, double (*pf)(double));
double integralaDreptunghi (double a, double b, double (*pf)(double));
double integralaSimpson (double a, double b, double (*pf)(double));

#endif
