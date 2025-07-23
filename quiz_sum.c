/*Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/

#include <stdio.h>

int main() {
    int i;
    int sum =0;
    for ( i = 8; i <= 80; i+=8)
    {
        sum+=i;
    }
    printf("the sum of numbers occuring in the multiplication table of 8 is %d" , sum);
    return 0;
}