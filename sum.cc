#include <stdio.h>

int main() {
    int a, b, c;
    int sum;
    scanf("%d %d %d", &a, &b, &c);//в scanf лучше не добавлять лишние символы, показать "%d,%d,%d"

    sum = (a + b + c);
    printf("%d\n", sum);

    return 0;
}
