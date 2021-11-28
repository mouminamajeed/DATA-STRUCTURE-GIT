#include<stdio.h>
int main()
{
int n,fact;
printf("\n enter any positive num:");
scanf("%d",&n);
fact=factorial(n);
printf("factorial of %d is %d",n,fact);
}
int factorial(int n)
{
	int temp;
	if (n==1)
	return 1;
	else
	{
		temp=n*factorial(n-1);
		return temp;
	}
}
