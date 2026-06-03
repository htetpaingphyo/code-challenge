#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *srev(char *s, int n) {
    char *left = malloc((n + 1) * sizeof(char));
    if (!left)
        return nullptr;

    char *rev = left;        // store the starting point of a new string
    char *right = s + n - 1; // add (n - 1) for null terminator

    // use two pointers technique to reverse the string
    // to prevent overwriting the original *s, declare *left as a new string
    // and copy the reverse chars from right to left
    while (right >= s) {
        *left++ = *right--;
    }

    *left = '\0'; // add null terminator at the EOS
    return rev;   // return the reversed BOS (*left will be EOS)
}

int main() {
    int len = 25;
    char *s = malloc(len * sizeof(char));

    printf("enter a string: ");
    fgets(s, len, stdin);

    // check the index of the newline and replace it with null terminator
    s[strcspn(s, "\n")] = '\0';

    char *r = srev(s, strlen(s));
    if (!r)
        return 1;

    printf("`%s` is %sa palindrome.\n", s, !strcmp(s, r) ? "" : "not ");

    free(s);
    free(r);
    return 0;
}
