#include <stdio.h>

long long rec(int n)
{
    if (n == 0) return 3;
    if (n == 1) return 0;
    if (n == 2) return 2;
    return rec(n - 2) + rec(n - 3);
}

long long cycle(int n)
{
    long long a = 3, b = 0, c = 2, d;
    int i;

    if (n == 0) return a;
    if (n == 1) return b;

    for (i = 3; i <= n; i++)
    {
        d = a + b;
        a = b;
        b = c;
        c = d;
    }

    return c;
}

int main(void)
{
    int n, r, c;

    printf("Введите n (0-40):\n");
    r = scanf("%d", &n);
    c = getchar();

    while (c == ' ' || c == '\t' || c == '\r')
        c = getchar();

    if (r != 1 || (c != '\n' && c != EOF) || n < 0 || n > 40)
    {
        printf("ошиибка\n");
        return 0;
    }

    printf("Рекурсия:%lld\n", rec(n));
    printf("Цикл:%lld\n", cycle(n));

    return 0;
}
