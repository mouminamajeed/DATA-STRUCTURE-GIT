#include<stdio.h>
int fact(int);
int main()
{
    int num,fac=0;
    printf("enter the value of n\n");
    scanf("%d",&num);
    fac=fact(num);
    printf("factorial of %d is %d",num,fac);
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
