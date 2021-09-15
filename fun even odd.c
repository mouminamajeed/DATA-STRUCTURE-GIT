#include<stdio.h>
void Iseven(int n);//prototye
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
Iseven(num);
}
void Iseven(int n)//definition
{
	if(n%2==0)
	printf("%d is an even number \n",n);
	else
	printf("%d is an odd number \n",n);
}
