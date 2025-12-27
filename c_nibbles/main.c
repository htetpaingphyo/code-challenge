#include <stdio.h>

int main()
{
	unsigned int num = 0;
	unsigned int low, high = 0;

	printf("enter an 8-bit number [0~255]: ");
	scanf("%u", &num);

	if(num < 0 || num > 255) return 0;

	low = num & 0x0f;
	high = (num >> 4) & 0x0f;

	printf("high nibbles: %04b\n", high);
	printf("low nibbles: %04b\n", low);
	
	return 0;
}
