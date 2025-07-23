// Write a program to take input of n and to print first ‘n’ natural number using do-while loop.
#include <stdio.h>

int main() {
    int n;
    printf("enter number n to which you want to print natural numbers\n");
    scanf("%d" , &n);
    int i = 1;
    do
    {
        printf("%d\n" , i);
        i++;
    } while (i<n+1);
    
    return 0;
}
