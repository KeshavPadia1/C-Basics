#include <stdio.h>

int main() {
    float radius, height, volume;
    const float pi = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;
    printf("Volume of cylinder: %.2f\n", volume);

    return 0;
}
