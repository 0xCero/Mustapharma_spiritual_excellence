#include <stdio.h>

/* count lines in input */
main()
{
	int c, nl, tab, blank;

	nl = 0;
	tab = 0;
	blank = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		if (c == '\t')
			++tab;
		if (c == ' ')
			++blank;
	printf("NewLines: %d\n Tabs: %d\n Blanks: %d\n", nl, tab, blank );
}
