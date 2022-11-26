#include <stdio.h>

int main()
{
    printf("Enter a message:");
    char ch, prt[50];
    int nub = 50, i;
    while ((ch = getchar()) != '\n')
    {
        prt[nub - 1] = ch;
        nub--;
    }
    printf("Reversal is:");
    for (i = nub; i < 50; i++)
    {
        printf("%c", prt[i]);
    }
    return 0;
}
