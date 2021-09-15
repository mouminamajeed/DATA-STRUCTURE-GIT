
#include<stdio.h>
int main()
{
	int a[7],i,max;
	printf("enter values in an array \n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
max=a[0];
for(i=1;i<7;i++)
{
	if(a[i]>max)
	max=a[i];
	
}
printf("\nmaximum is %d",max);
return 0;
}
