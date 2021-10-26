#include <stdio.h>

int main()
{
	int n,i;

	scanf("%d", &n);
	if (n > 100000)
		return 0;
	for (i = n; i >= 1; i--)
	{
		printf("%d\n", i);
	}
}