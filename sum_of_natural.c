#include <stdio.h>

int main() {
    int i;
    int n;
    printf("Enter number n\n");
    scanf("%d" , &n);
    int sum =0;
    for ( i = 1; i <=n; i++)
    {
        sum+=i;
    }
    printf("sum of first %d natural numbers is %d" , n , sum);
    return 0;
}