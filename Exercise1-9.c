#include <stdio.h>

/* count lines in input and return output. If there are more than
one consecutive blank spaces, replace them with a single blank */
main()
{
	int c, prev;

	while ((c = getchar()) != EOF)
		if (c != ' ' || prev != ' ')
			putchar(prev = c);
}
