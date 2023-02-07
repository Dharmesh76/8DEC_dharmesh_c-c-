#include<stdio.h>
int fib(int n)
{
	if (n==0 || n== 1)
	{
		if(n==0)
		{
			return 0;
		}
		if(n==1)
		{
			return 0;
		}
	}
	int a = fib( n-1 );
	int b = fib(n -2);
	int FibOfN = a + b;
	return FibOfN;
}
int main()
{
	int n;
    printf("enter number for print fibonocci : ");
    scanf("%d",&n);
    printf("fibonocci of %d is : %d",n,fib(n));
	return 0;
}
