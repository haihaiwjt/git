#include <stdio.h>
int main()
{
	int a;
	printf("Enter numerical grade:");
	scanf("%d", &a);
	if (a > 100 || a < 0)
		printf("Error, grade must be between 0 and 100.\n");
	else
		a = a / 10;
	switch (a)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("Letter grade:F\n");
		break;
	case 6:
		printf("Letter grade:D\n");
		break;
	case 7:
		printf("Letter grade:C\n");
		break;
	case 8:
		printf("Letter grade:B\n");
		break;
	case 9:
	case 10:
		printf("Letter grade:A\n");
		break;
	}
	return 0;
}
