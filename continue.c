#include <stdio.h>

int main() {
    for(int i=0; i<10; i++)
    {
if(i == 5){
    continue;
}
printf("%d\n", i);

    }
    return 0;
}
// now here also the order of print and continue matters , continue should be there before print