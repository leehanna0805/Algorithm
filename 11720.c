#include <stdio.h>

int main()
{
	int num, n, i, sum=0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%1d", &n);
		sum += n;
	}
	printf("%d", sum);
}