#include<stdio.h>
#define YANG 2.05
#define SWEET 1.15
#define CARROT 1.09
#define DISCOUNT 0.95
int main(void)
{
	double w1 = 0;
	double w2 = 0;
	double w3 = 0;
	double w = 0;
	double p, q, r;
	double fee;
	char kind;
	double price;
	printf("soory,I'm a litte dizzy, so this program is in a mass, I cound have written it more conscisely\n");

	do
	{
		printf("please select vegetable kind:\n");
		scanf("%c", &kind);
		if(kind=='\n')
			scanf("%c", &kind);
		switch (kind)
		{
		case 'a':printf("please enter your hoped yang weight\n");
			scanf("%lf", &p);
			w1 = w1 + p;
			break;
		case 'b':printf("please enter your hoped sweet weight\n");
			scanf("%lf", &q);
			w2 = w2 + q;
			break;
		case 'c':printf("please enter your hoped carrot weight\n");
			scanf("%lf", &r);
			w3 = w3 + r;
			break;
		}


	} while (kind != 'q');
	w = w1 + w2 + w3;
	printf("yang is %lf, sweet is %lf, carrot is %lf\n", w1, w2, w3);
	printf("all is %lf", w);

	double price1;
	price1 = w1 * YANG + w2 * SWEET + w3 * CARROT;
	if (price1 > 100)
		price1 = price1 * DISCOUNT;

	if (w < 5)
		fee = 6.5;
	if (w > 5 && w <= 20)
		fee = 14;
	if (w > 20)
		fee = 14 + (w - 20)*0.5;
	printf("\nfee is %lf", fee);

	price = price1 + fee;


	printf("\nfinally count is %lf", price);
	




	return 0;
}