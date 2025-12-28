#include <stdio.h>

bool is_palindrome(unsigned int n) {
	unsigned int result, quotient, remainder = 0;
	quotient = n;

	while (quotient != 0) {
		remainder = quotient % 10;
		result = result * 10 + remainder;
		quotient /= 10;
	}

	return result == n;
}

int main() {
	unsigned int n = 0;

	printf("enter a number: ");
	scanf("%u", &n);
	
	if(is_palindrome(n))
		printf("%u is palindrome.\n", n);
	else
		printf("%u is not palindrome.\n", n);

	return 0;
}

