#include<stdio.h>
bottom(void);
mid(void);
up(void);
int main(void)
{
	int i, j;


	up();
	mid();
	bottom();

	return 0;
}






up(void)
{
	printf("\n\n\n\n\n\n\n\n");
	printf("%51s%12s\n", "* * *", "* * *");
	printf("%45c%8c%4c%8c\n", '*','*','*', '*');

	return 0;
}








mid(void)
{
for (int m = 0; m < 3; m++)
	{
		if (m == 1)
			printf("%42c%26c\n", '*', '*');
		else if(m=2)
			printf("%43c%12c%12c\n", '*','*', '*');
		else printf("%43c%24c\n", '*', '*');
	}
return 0;
}


bottom(void)
{	int i, j;
	i = 44;
	j = 22;
	while (j > 2)
	{
		printf("%*c%*c\n", i, '*', j, '*');
		i = i + 2;
		j = j - 4;
	}
	printf("%55c", '*');
	printf("\n\n\n\n\n\n\n\n");
	return 0;
	}