#include <stdio.h>

double calc(double a, double b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    return a - b;
}

int main(void)
{
    double a, b;
    int n, c;

    printf("Введите два числа:\n");

    while ((n = scanf("%lf %lf", &a, &b)) != EOF)
    {
        c = getchar();
        while (c == ' ' || c == '\t' || c == '\r')
            c = getchar();

        if (n == 2 && (c == '\n' || c == EOF))
            printf("Результат: %.4f\n", calc(a, b));
        else
        {
            printf("ошибка\n");
            while (c != '\n' && c != EOF)
                c = getchar();
        }
    }

    return 0;
}
