#include<stdio.h>
int main()
{
	int a[100],n,i;
printf("enter the number of elements (100 max):\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nenter element:");
	scanf("%d",&a[i]);
}
printf("\n enter the elemnt you want to delete:");
scanf("%d",&i);
int j=0; int k;
while (a[j]!=i)
j++;
for(k=j;k<n-1;k++)
a[k]=a[k+1];
n=n-1;

	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
