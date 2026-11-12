#include <stdio.h>

void calc(double *a, double *b)
{
    double x = *a;

    *a = x * *b;
    *b = x / *b;
}

int main(void)
{
    double a, b;
    int n, c;

    printf("Введите два числа:\n");
    n = scanf("%lf %lf", &a, &b);
    c = getchar();

    while (c == ' ' || c == '\t' || c == '\r')
        c = getchar();

    if (n != 2 || (c != '\n' && c != EOF))
    {
        printf("ошибка\n");
        return 0;
    }

    if (b == 0)
    {
        printf("ошибка\n");
        return 0;
    }

    printf("До: %.2f %.2f\n", a, b);
    calc(&a, &b);
    printf("После: %.2f %.2f\n", a, b);

    return 0;
}
