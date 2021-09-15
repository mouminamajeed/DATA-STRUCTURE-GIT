#include <stdio.h>
int power(int n1, int n2);//fun declar
int main()
 {
    int b, p, r;
    printf("\n Enter base number: ");
    scanf("%d", &b);
    printf("Enter power number(positive integer): ");
    scanf("%d", &p);
    r = power(b, p);//fun call
    printf("\n %d^%d = result is %d", b, p, r);
    return 0;
}

int power(int b, int p)//fun definition
 {
    if (p == 0)//base cond
        return 1;
    else
        return (b * power(b, p - 1));//recursive fun call
}
