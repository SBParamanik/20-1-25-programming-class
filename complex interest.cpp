#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t, compoundinterest, a;
	printf ("enter the principle amount");
	scanf ("%f", &p);
	printf ("enter the rate");
	scanf ("%f", &r);
	printf ("enter the time");
	scanf ("%f", &t);
	a= p*pow((1+r/100),t);
	compoundinterest = a-p;
	printf ("the compoundinterest is :%.2f\n", compoundinterest);
	printf ("the amount is :%.2f\n", a);
	return 0; 
}
