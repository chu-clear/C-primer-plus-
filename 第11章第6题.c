#include<stdio.h>
#include<ctype.h>
int read(char *pt,char ch);
int main(void)
{
	char ch;
	int A;
	char note[40] = "how are you?";
	printf("please enter your search character:\n");
	while (scanf("%c", &ch) == 1)
	{
		while (getchar() != '\n')
			continue;
		A = read(note, ch);

		printf("one is %d\n", A);
	}
}
int read(char *pt,char ch)
{
	int A = 0;
	while (A == 0)
	{
		if (*pt == '\0')
		{
			return 0;
			A = 1;
		}
		if (*pt == ch)
		{
			return 1;
			A=2;
		}
		pt++;
	}

}