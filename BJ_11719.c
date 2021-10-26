#include <stdio.h>

int main()
{
	int i;
	char str[200];

	while (gets(str) != '\0')
		printf("%s\n", str);
}