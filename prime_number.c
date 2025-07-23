#include <stdio.h>

int main() {
    int n;
    printf("Enter number n\n");
    scanf("%d" , &n);
    int p=0;
    if (n == 0 || n == 1){
        printf("%d is neither prime nor composite" , n);
    }
    else {
        for (int i = n - 1; i > 1; i--)
        {
            if(n%i == 0)
            p = 1;
        }
    }
    if(p)
    printf("%d is not a prime number" , n);
    else
    printf("%d is a prime number" , n);
    return 0;
}