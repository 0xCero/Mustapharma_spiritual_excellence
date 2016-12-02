#include <stdio.h>

/* count lines in input and return output. If there are more than
one consecutive blank spaces, replace them with a single blank */
main()
{
	int c;

	while ((c = getchar()) != EOF)
		if (c == '\t' || c == '\b' || c == '\\')
			{
				putchar(c = '\\');
				putchar(c = '\\');
			}
		else
			{
				putchar(c);
			}
}
