#include <stdio.h>
int main()
{
	int m, n, a = 0;
	printf("Enter two integers:");
	scanf("%d %d", &m, &n);
	if (n == 0)
		printf("Greatest common divisor:%d\n", m);
	else
	{
		for (a = m % n, m = n, n = a; n != 0;)
		{
			a = m % n, m = n, n = a;
		}
		printf("Greatest common divisor:%d\n", m);
	}
	return 0;
}
