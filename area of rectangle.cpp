#include <stdio.h>
int main()
{
	float l,b,a,p;
	printf ("enter the lenght");
	scanf ("%f",&l);
	printf ("enter the breadth");
	scanf ("%f",&b);
	a= l*b;
	p= 2*(l+b);
	printf ("the area of rectangle is:%.2f\n", a);
	printf ("the parameter of rectangle is:%.2f\n", p);
	return 0;
}
