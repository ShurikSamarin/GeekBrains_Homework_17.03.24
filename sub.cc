#include <stdio.h>

int main() {
    int a, b;
    int sub;
    scanf("%d %d", &a, &b);//в scanf лучше не добавлять лишние символы, показать "%d,%d,%d"

    sub = (a - b);
    printf("%d\n", sub);

    return 0;
}