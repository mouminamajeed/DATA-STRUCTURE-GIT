#include<stdio.h>

int main()
{
	int num;
	printf("enter any decimal number:\n");
	scanf("%d",&num);
	printf("\n binary value:");
	dec(num);
return 0;
}
int dec(int n)
{
	if (n==0 || n==1)

{
	printf("%d",n);
	return ;
}
dec(n/2);
dec(n%2);
}
