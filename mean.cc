#include <stdio.h>

int main(void) {
    int x, sum;

    scanf("%d", &x);
    
    sum = (x / 1000) + ((x / 100) % 10) + ((x / 10) % 10) + (x % 10);
    float average = (float)sum / 4;
    printf("%.2f\n", average);

    return 0;
}
