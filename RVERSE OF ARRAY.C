#include <stdio.h>
#define Ms 50 
int main()
{
    int arr[Ms];
    int s, i;
    printf("\n Enter size of the array: ");
    scanf("%d", &s);
    printf("\nEnter elements in array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Array in reverse order: ");
    for(i = s-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
