#include<stdio.h>
int main(void)
{
	char ch;
	int i = 50;
	printf("it is %d?\n", i);
	printf("please enter yes or no ,it is y or n(enter q to quit game)\n");
	while ((ch=getchar()) == 'q')
	{
		
		if (ch == 'n')
		{
			printf("my answer is bigger or smaller?\n");
			printf("please enter b or s(enter q to quit game)\n");

			while ((ch = getchar()) == 'q')
			{
				if (ch == 'b')
				{
					i = i - (i / 2);
					printf("it is %d", i);
					break;
				}
				if (ch == 's')
				{
					i = i + (i / 2);
					printf("it is %d", i);
					break;
				}

			
			}

		}
		else if (ch == 'y')
			printf("i knew i can!!!!!\n");
		else printf("please enter y or n");

		printf("my answer is right?\n");
	}



	return 0;

}
