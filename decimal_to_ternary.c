#include<stdio.h>
int recur(int num)
{
    if(num==0)
    return 0;
    else return((num%3)+10*recur(num/3));
}
int main()
{
    int num;
    printf("enter the decimal number");
    scanf("%d",&num);
    printf("ternary value :%d",recur(num));
    return 0;
}