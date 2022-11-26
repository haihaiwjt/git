#include <stdio.h>

int main()
{
    printf("Enter message to be encrypted:");
    char respact[100], ch, nub = 0; // respact放置对象，ch是输入的值，nub为确定数组的位置
    while ((ch = getchar()) != '\n')
    { //放置原始数据
        respact[nub] = ch;
        nub++;
    }
    int a = 0, add; // a为改变的数组的位置,add为添加的位次
    printf("Enter shift amount (1-25):");
    scanf("%d", &add);
    for (; a < nub; a++)
    {
        if (respact[a] >= 'A' && respact[a] <= 'Z')
        {
            if ((respact[a] + add) > 'Z')
            {
                respact[a] = (respact[a] + add - 1 - 'Z' + 'A');
            }
            else
                respact[a] = respact[a] + add;
        }
        else if (respact[a] >= 'a' && respact[a] <= 'z')
        {
            if ((respact[a] + add) > 'z')
            {
                respact[a] = (respact[a] + add - 1 - 'z' + 'a');
            }
            else
                respact[a] = respact[a] + add;
        }
        else
            ;
    }
    int b = 0;
    printf("Encrypted message:");
    while (b < nub)
    {
        printf("%c", respact[b]);
        b++;
    }
    return 0;
}
