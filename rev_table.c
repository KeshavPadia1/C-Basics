#include <stdio.h>

int main() {
    int n;
    printf("enter number n\n");
    scanf("%d" , &n);
    for (int i = 10; i ; i--)
    {
        printf("%d * %d = %d\n" , n , i ,n*i);
    }
    
    return 0;
}