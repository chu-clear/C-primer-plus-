#include<stdio.h>
void function(int n);
int main(void)
{
	int num;
	
	printf("please enter positive intger:\n");
	scanf("%d", &num);

	do {
		
		function(num);
		printf("\nplease enter next number(enter non-positive-intger to quit)");
		scanf("%d", &num);

	} while (num > 0);

	
	return 0;

}
void function(int n)
{
	int A = 0;
	if (n == 1)
		printf("no vegetable");
	else
		for (int i = 2; i <= n; i++)
		{
			A = 0;
			for (int j = 2; j*j <= i; j++)
			{
				if (i%j == 0)
					A++;
			}
			if (A == 0)
				printf("%d  ", i);
		}

}