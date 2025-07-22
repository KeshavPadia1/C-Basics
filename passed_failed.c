#include <stdio.h>

int main() {
    int physics, chemistry, maths;
int total;

printf("Enter your marks in physics out of 100\n");
scanf("%d", &physics);

printf("Enter your marks in chemistry out of 100\n");
scanf("%d", &chemistry);

printf("Enter your marks in maths out of 100\n");
scanf("%d", &maths);

total = physics + chemistry + maths;

if (total >= 300 * 40 / 100 && physics >= 33 && chemistry >= 33 && maths >= 33)
    printf("you are passed\n");
else
    printf("you are failed\n");

    return 0;
}