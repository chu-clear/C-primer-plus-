#include<stdio.h>
int array(int num);
int main(void)
{
	int num;

	printf("please enter array item numbers:");
	scanf("%d", &num);
	array(num-2);

	return 0;
}
int array(int num)
{

	int n1 = 1;
	int n2 = 1;
	int n3 = 1;
	if (num > 1)
		array((num - 1));
	if (num == 1)
		printf("%d  %d  ", n1, n2);
	for (int i = 1; i <= num; i++)
	{
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;

	}
	printf("%d  ", n3);

	return n2;
}