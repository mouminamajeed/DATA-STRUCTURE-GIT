#include <stdio.h> 
void prime();
int main() 
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    prime(n);
}
void prime(int n)
{
    int i,c=0;
    for(i=1;i<= n;i++)
    {
        if (n%i==0) 
        {
            c++;
        }
    }
    if(c==2)
    {
  	    printf("\n%d is a Prime number",n);
    }
    else 
    {
     printf("\n %d is not a Prime number",n);
	}
	}
