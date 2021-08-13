#include<stdio.h>
double power(double n, int p);
int main(void)
{
	double x,xpow;
	int exp;
	printf("plesase enter your num and ´Î·½ in order(enter q to quit):\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%lf to the %d power is %.5g \n", x, exp, xpow);
		printf("enter next data.\n");
}

	printf("byebye\n");
	return 0;
}
double power(double n, int p)
{
	int A = 0;
double pow = 1;
	int i;

	if (p < 0)
	{
		printf("test");
			p = -p;
			A = 1;
	}
	if (n != 0 && p == 0)
		pow = 1;
	if (n == 0 && p != 0)
		pow = 0;

	if (n==0&&p== 0)
		pow = 1;
	else for (i = 1; i <= p; i++)
		pow = pow * n;

	printf("\nA=%d\n", A);
	if (A==1)
		pow = 1 / pow;




	return pow;
}