#include <stdio.h>

bool is_palindrome(unsigned int n) {
	unsigned int result, temp, remainder = 0;
	temp = n;

	while (temp != 0) {
		remainder = temp % 10;
		result = result * 10 + remainder;
		temp /= 10;
	}

	if(result == n) return true;
	else return false;
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

