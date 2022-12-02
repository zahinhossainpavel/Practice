#include <stdio.h>
int main()
{

    printf("Enter Hour: ");
    int hour;
    scanf("%d", &hour);
    printf("Enter Minutes: ");
    int min;
    scanf("%d", &min);
    int summ;
    summ = hour*60+min;
    printf("Total: %d minutes.", summ);

    return 0;
}

