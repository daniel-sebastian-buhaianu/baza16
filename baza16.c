#include <stdio.h>

#define LGMAX 10

int main()
{
	unsigned n;
	unsigned short rest, i = 0;
	char r[LGMAX + 1]; 

	scanf("%u", &n);

	while (n) {
		rest = n % 16;

		r[i++] = (rest >= 10) ? ('A' + rest - 10) : ('0' + rest);

		n /= 16;
	}

	r[i] = '\0';

	for (short j = i - 1; j >= 0; j--) printf("%c", r[j]);

	return 0;
}

// scor 100
