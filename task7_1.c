#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
        if (isdigit(c))
            putchar(c);

    return 0;
}
