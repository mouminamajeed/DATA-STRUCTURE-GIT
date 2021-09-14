#include <stdio.h>
int main()
 {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n% 2 == 0)
        printf("%d is an even number", n);
    else
        printf("%d is odd ", n);
    
    return 0;
}
