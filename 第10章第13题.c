#include<stdio.h>
#define NUM 5
void enter(double[][NUM], int n, int m);
double averageeach(double[][NUM], int n, int m,double []);
double averageall(double[][NUM], int n, int m);
double max(double[][NUM], int n, int m);

int main(void)
{
	double ALL, MAX;
	double data[3][5];
	double each[3];

	enter(data, 3, 5);
	
	averageeach(data, 3, 5, each);
	ALL = averageall(data, 3, 5);
	MAX = max(data, 3, 5);

	
		
		printf("all average is %g\n", ALL);
		printf("max is %g\n", MAX);





}
void enter(double ar[][NUM], int n, int m)
{
	
	printf("please enter data for 3 array 5 line");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%lf", &ar[i][j]);

	printf("enter is ");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			printf("%g  ", ar[i][j]);
	printf("\n");



}
double averageeach(double ar[][NUM], int n, int m,double each[])
{
	double sum;
	for (int i = 0; i < n; i++)
		for (int j = 0, sum = 0; j < m; j++)
		{
			sum = sum + ar[i][j];
			each[i] = sum / 5;
		}

	printf("each is ");
	for (int i = 0; i < 3; i++)
		printf("%g  ", each[i]);
	printf("\n");


}
double averageall(double ar[][NUM], int n, int m)
{
	double sum=0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			sum = sum + ar[i][j];
	return (sum /15);
}
double max(double ar[][NUM], int n, int m)
{
	double max = ar[0][0];
	for (int i = 0, sum = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (max < ar[i][j])
				max = ar[i][j];

	return max;
}