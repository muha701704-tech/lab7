#include <stdio.h>

int main(void)
{
    int c;
    long count = 0, total = 0;

    while ((c = getchar()) != EOF)
    {
        total++;
        if (c < 128 && c % 11 == 0)
            count++;
    }

    printf("Кратных 11: %ld\n", count);
    printf("Всего символов: %ld\n", total);

    return 0;
}
