#include <stdio.h>
int main()
{
    double a, d = 0;
    char ch;
    printf("Enter");
    scanf("%lf", &a);
    while ((ch = getchar()) != '\n')
    {
        scanf("%lf", &d);
        switch (ch)
        {
        case '+':
            a = a + d;
            break;
        case '-':
            a = a - d;
            break;
        case '*':
            a = a * d;
            break;
        case '/':
            a = a / d;
            break;
        }
    }
    printf("value %f", a);
    return 0;
}
