#include<stdio.h>
double copy(double[], int n);
int main(void)
{
	
	double data[5] = { 2.0,6.0,98.0,4.0,22.0 };
	copy(data, 5);
	
}
double copy(double ar[], int n)
{
	
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				if (ar[i] < ar[j])
				{
					double b = ar[i];

					ar[i] = ar[j];
						ar[j] = b;
				};

		for (int m = 0; m < n; m++)
			printf("%g  ", ar[m]);



}