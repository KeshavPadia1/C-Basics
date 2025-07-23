// Write a program to print multiplication table of a given number n.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number n\n");
    scanf("%d" , &n);
    int i=1;
    while (i<=10)
    {
        printf("%d * %d = %d\n" , n , i , n*i);
        i++;
    }
    
    return 0;
}