#include <stdio.h>

int main() {
    unsigned char i = 200;
    unsigned char j = 220;
    unsigned int sum = i + j;  
    unsigned char k = sum / 2; 

    printf("(%d + %d) / 2 = %d\n", i, j, k);
    return 0;
}
