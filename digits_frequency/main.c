#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int digits[10];
    int size = 10;
    int current = 0;
    char ch;

    char *s = malloc(sizeof(char) * size);
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (current >= size - 1)
        {
            size *= 2;
            s = realloc(s, sizeof(char) * size);
        }
        s[current++] = ch;
    }

    for (int i = 0; i < 10; ++i)
        digits[i] = 0;

    for (int i = 0; i < size; ++i)
    {
        if (isdigit(s[i]))
        {
            int t = s[i] - '0';
            digits[t]++;
        }
    }

    for (int i = 0; i < 10; ++i)
        printf("%d ", digits[i]);

    free(s);
    return 0;
}
