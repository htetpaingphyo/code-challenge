#include <stdio.h>

char *dec_to_binary(int n)
{
    static char binary[17];
    binary[16] = '\0';
    for (int i = 15; i >= 0; i--)
    {
        binary[i] = (n & 1) ? '1' : '0';
        n >>= 1;
    }
    return binary;
}

int main()
{
    int number;
    printf("Eneter a decimal number: ");
    scanf("%d", &number);
    printf("Binary representation: %s\n", dec_to_binary(number));
    return 0;
}
