#include<stdio.h>
 double num(double * a,double * b,double * c);
int main(void)
{
	double b = 4;
	double c = 2.5;
	double a= 5;
	printf("%g %g %g\n", a, b, c);
	num(&a, &b,&c);
	printf("%g %g %g\n", a,b,c);
		return 0;
}
double  num(double * a,double * b, double * c)
{
	double min, max, mid;
	min =*a<*b?*a:*b ;
	min = *c < min ? *c : min;

	max = *a > *b ? *a : *b;
	max = *c >max ? *c : max;

	mid = *a == max ? *b : *a;
	mid = mid== min ? *c : mid;
	*a = min;
	*b = mid;
	*c=max;
	 return 0;
}