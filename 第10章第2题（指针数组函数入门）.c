#include<stdio.h>
void copy1(double[], double[], double n);
void copy2(double[], double[], double n);
void copy3(double[], double[], double *pt);
void copy4(double *, double *, double );

int main(void)
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5]; 
	double target2[5];
	double target3[5];

	copy1(target1, source, 5);
	copy2(target2, source, 5);
	copy3(target3, source, source + 5);

	for (int i = 0; i < 5; i++)
		printf("%g  ", target1[i]);
	printf("\n");
	for (int j = 0; j < 5; j++)
		printf("%g  ", target2[j]);
	printf("\n");
	for (int m = 0; m < 5; m++)
		printf("%g  ", target3[m]);
	printf("\n");


	return 0;

}
void copy1(double ar[], double ab[], double n)
{
	for (int i = 0; i < n; i++)
		ar[i] = ab[i];


}
void copy2(double ar[], double ab[], double n)
{
	double *pt = ar;
	double *ptr = ab;

	for (int i = 0; i < n; i++)
		*(pt+i) = *(ptr+i);


}




void copy3(double ar[], double ab[], double *pt)
{
	double *ptr=ab;
	for (int i=0; (ptr +i)< pt; i++)
		ar[i] =ab[i];

	
}
void copy4(double *ar, double *ab, double n)

{
	for (int i = 0; i < n; i++)
		*(ar+i) = *(ab+i);

	
}
