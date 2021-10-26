#include <stdio.h>

int main()
{
	char str[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		for (int i = 0; i < 100; i++)
			str[i] = ' ';

		gets(str);
		
		if (str[0] == ' ')
			break;
		else
			printf("%s\n", str);
	}
}