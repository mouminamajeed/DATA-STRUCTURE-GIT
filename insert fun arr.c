#include<stdio.h>
int insert(int arr[], int n,  int b, int c)
{
if (n >= c)
return n;
arr[n] = b;
return (n + 1);
}
int main()
{
int arr[20] = {8, 5, 6, 9, 0, 7} ;
int c = sizeof(arr) / sizeof(arr[0]);
int n = 6;
int i, b = 2;
printf("\n Before Insertion: ");
for (i = 0; i < n; i++)
printf("%d  ", arr[i]);
n = insert(arr, n, b, c);
printf("\n After Insertion: ");
for (i = 0; i < n; i++)
printf("%d  ",arr[i]);
return 0;
}
