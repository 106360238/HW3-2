#include <stdio.h>
#include <stdlib.h>

main()
{
	char input;
	printf("input:");
	scanf_s("%c", &input);

	if (input < 91)
	{
		input = input + 32;
	}
	else
	{
		input = input - 32;
	}
	printf("output:%c", input);
	system("pause");
	return 0;
}