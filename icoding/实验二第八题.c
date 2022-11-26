#include <stdio.h>
int main()
{
	int day, start;
	printf("Enter number of days in month:");
	scanf("%d", &day);
	printf("Enter starting day of the week(1=Sun, 7=Sat):");
	scanf("%d", &start);
	printf("日 一 二 三 四 五 六\n\n");
	int a;
	for (a = 1; a < start; a++)
	{
		printf("   ");
	}
	for (a = 1; a <= day; a++)
	{
		printf("%-3d", a);
		if (start == 7)
		{
			start %= 7;
			if ((a + start - 1) % 7 == 0)
			{
				printf("\n");
			}
		}
		else if ((a + start - 1) % 7 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
