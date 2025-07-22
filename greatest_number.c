#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);

    printf("Enter number 3: ");
    scanf("%d", &c);

    printf("Enter number 4: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d) {
        printf("Greatest of the following four numbers is %d\n", a);
    } else if (b > a && b > c && b > d) {
        printf("Greatest of the following four numbers is %d\n", b);
    } else if (c > a && c > b && c > d) {
        printf("Greatest of the following four numbers is %d\n", c);
    } else {
        printf("Greatest of the following four numbers is %d\n", d);
    }

    return 0;
}