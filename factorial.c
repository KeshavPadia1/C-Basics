#include <stdio.h>

int main() {
    int factorial =1;
    int n;
    printf("enter number n\n");
    scanf("%d" , &n);
    int i = n;
    while (i>=1)
    {
        factorial *=i;
        i--;
    }
    printf("%d! = %d" , n , factorial);
    return 0;
}