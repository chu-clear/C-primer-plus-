#include<stdio.h>
int function(int n, int A);
int main(void)
{
	int n=66;
	int A=8;
	function(n,A);

	return 0;
}
int function(int n, int A)
{
	int r;
	r = n % A;
	if (n >= A)
		function(n / A,A);
	
	printf("%d", r);

	return 0;
}