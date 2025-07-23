#include <stdio.h>

int main() {
    for(int i=0; i<10; i++)
    {

printf("%d\n", i);
if(i == 5){
    break;
}
    }
    return 0;
}

// break1 is diff than break2 because of the output as it matters whether break is first or print is first