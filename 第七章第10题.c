#include<stdio.h>
#define RATE1 0.85
#define RATE2 0.72
float function(float limit, float sum);
int main(void)
{
	double sum;
	int code;
	printf("The following is tax scheme:\n");
	printf("%-40s%-40s\n", "category", "tax propotion");
	printf("%-40s%-40s\n", "1)singlehood", "17850-15%---exceed-28%");
	printf("%-40s%-40s\n", "2)master", "23900-15%---exceed-28%");
	printf("%-40s%-40s\n", "3)married", "29750-15%---exceed-28%");
	printf("%-40s%-40s\n", "4)divorced", "14875-15%---exceed-28%");
	
	printf("\n\nplease enter your salary:\n");
	while (scanf("%lf", &sum) == 1)
	{
		printf("\nplease select your level code:\n");
		scanf("%d", &code);
		switch (code)
		{
		case 1:function(17850, sum);
			break;
		case 2:function(23900, sum);
			break; 
		case 3:function(29750, sum);
			break; 
		case 4:function(14875, sum);
			break;
		default:printf("your have not select unkonw level,please select again\n");

		}
	}
	
	return 0;
}
float function(float limit, float sum)
{
	double n = 20000;
	double model = 17850;
	double salary;
	if (sum <= limit)
		salary = sum * RATE1;
	else salary = limit * RATE1 + (sum - limit)*RATE2;
	printf("your finally can obtain %lf\n", salary);
	printf("please enter new salary\n");
}
