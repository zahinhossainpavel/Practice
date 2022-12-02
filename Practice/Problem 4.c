#include <stdio.h>
int main()
{
    printf ("Enter a integer number: ");
    int a, b;
    scanf ("%d", &a);
    printf ("Enter another integer number: ");
    scanf ("%d", &b);
    int sum1, sum2, sum3;
    sum1 = a+b;
    sum2=a-b;
    sum3=a*b;
    printf ("%d %d %d",sum1, sum2, sum3);

    return 0;
}


