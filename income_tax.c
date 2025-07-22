#include <stdio.h>

int main()
{
    int i;
    printf("Enter your annual income\n");
    scanf("%d", &i);
    if (i <= 250000)
        printf("your income is tax free\n");
    else if (i <= 500000 && i >= 250000)
        printf("you have to pay %d amount as tax", i * 5 / 100);
    else if (i <= 1000000 && i >= 500000)
        printf("you have to pay %d amount as tax", i * 20 / 100);
    else if(i >= 1000000)
        printf("you have to pay %d amount as tax", i * 30 / 100);
    return 0;
}
