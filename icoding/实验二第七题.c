#include <stdio.h>
int main()
{
	int a = 2, n;
	printf("Enter a number:");
	scanf("%d", &n);
	while ((a * a) <= n)
	{
		printf("%d\n", a * a);
		a = a + 2;
	}
	return 0;
}
