// learning about conditional statements

#include <stdio.h>

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("d", &num);

	if (num >= 0 )
	{
		printf("Positive \n");
	}
	else
	{
		printf("Negative \n");
	}
	printf("The End");
	return 0;
}
