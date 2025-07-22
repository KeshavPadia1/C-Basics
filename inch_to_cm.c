#include <stdio.h>

int main() {
    float inches, cm;
    printf("Enter length in inches: ");
    scanf("%f", &inches);
    cm = inches * 2.54;
    printf("Length in cm: %.2f\n", cm);
    return 0;
}
