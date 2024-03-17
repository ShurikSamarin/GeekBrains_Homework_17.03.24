#include <stdio.h>

int main() {
    int a, b, c;
    int sum, mult;
    scanf("%d %d %d", &a, &b, &c);//в scanf лучше не добавлять лишние символы, показать "%d,%d,%d"

    sum = (a + b + c);
    mult = (a * b * c);
    printf("%d\n", sum);
    printf("%d\n", mult);

    return 0;
}