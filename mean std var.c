#include<stdio.h>
#include<math.h>
//mean=sum of terms/no. of terms
//variance=summation(mean-term)/no. of terms
//std=sqrtof var
int main()
{
	float a[60],sum=0,mean,sum1=0;
	int i,n,j,k,var,sd;
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element:\n ");
		scanf("%f",&a[i]);
	}
	for(j=0;j<n;j++)//for sum
	{
		sum=sum+a[j];
	}
	mean=sum/n;
	for(k=0;k<n;k++)
	{
	sum1=sum1+(mean-a[k])*(mean-a[k]);
	}
	var=sum1/n;

	sd=sqrt(var);
	printf("\n mean is %f",mean);
	printf("\n variance is %f",var);
	printf("\n standard deviation is %f",sd);
	
return 0;
}
