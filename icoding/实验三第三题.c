#include <stdio.h>

int main()
{
	int all[50], d = 0, e = 0;
	while (all[e] != 58)
	{
		all[e] = 58;
		e++;
		if (e >= 50)
			break;
	}
	char ch;
	printf("Enter a number:");
	while ((ch = getchar()) != '\n')
	{
		all[d] = ch;
		d++;
	}
	printf("Digit:	   0123456789\nccurrences:");
	int cir;
	for (cir = 0; cir < 10; cir++)
	{
		int a = 0, b = 0;
		while (b < 50)
		{
			if ((all[b] - 48) == cir)
				a++;
			else
				;
			if ((all[b] - 48) == 10)
				break;
			b++;
		}
		printf("%d", a);
	}
	printf("\n");
	return 0;
}
