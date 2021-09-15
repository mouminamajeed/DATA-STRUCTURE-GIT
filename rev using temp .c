
#include<stdio.h>
int main()
 {
 int arr[30], i, j, num, temp;
printf("\nEnter number of elements : ");
 scanf("%d", &num);
 printf("\nEnter the elements in an array to be reversed: ");
//Reading elements in an array
 for (i = 0; i < num; i++) {
 scanf("%d", &arr[i]);
 }

j = i - 1; // j will Point to last element of an array
 i = 0; // i will be pointing to first element of ann array

while (i < j) 
{
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 i++; // increment i
 j--; // decrement j
 }

//Printing output
 printf("\nThe result after reversing of an array : ");
 for (i = 0; i < num; i++)
  {
 printf("%d \t", arr[i]);
 }
return (0);
}
