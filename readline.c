#include <stdio.h>
#include <string.h>

int main()
{
	char line[100];
	int len;

	printf("Enter a phrase: ");
	fgets( line, 100, stdin);

	printf("Read @%s@\n", line);

	// remove trailing newline
	len = strlen( line );
	len--;
	line[len] = '\0';

	printf("Now @%s@\n", line);
	printf("Len: %d\n", len);

	return 0;
}
