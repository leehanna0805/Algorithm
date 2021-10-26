#include <stdio.h>

int main()
{
	char date[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int month, day, days = 0;

	scanf("%d %d", &month, &day);

	for (int i = 0; i < month - 1; i++)
	{
		days += date[i];
	}
	days += day;

	switch (days % 7)
	{
		case 0:
			puts("SUN"); break;
		case 1:
			puts("MON"); break;
		case 2:
			puts("TUE"); break;
		case 3:
			puts("WED"); break;
		case 4:
			puts("THU"); break;
		case 5:
			puts("FRI"); break;
		case 6:
			puts("SAT"); break;
	}
}