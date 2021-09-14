#include<stdio.h>
int fib(int);//prototype
int main()
{
	int n,t,fib;
	printf("enter n");
	scanf("%d",&n);
	t=fibo(1,1,n);
	printf("%d term of fibonacii sequ is %d",n,t);	
}
int fibo(int a,int b,int n)
{
	if(n==1||n==2)
return 1;
else 
return fib(n-1)+fib(n-2);
}
