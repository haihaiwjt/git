#include <stdio.h>
#include <string.h>

int main()
{
    char content[3][20];
    char exchange[20];
    printf("Enter word:");
    scanf("%s", content[1]); /*content[1] contain max*/
    printf("Enter word:");
    scanf("%s", content[2]); /*content[2] ccontain main*/
    if (strcmp(content[1], content[2]) <= 0)
    {
        strcpy(exchange, content[1]);
        strcpy(content[1], content[2]);
        strcpy(content[2], exchange);
    }
    else
        ;

    for (;;)
    {
        int cot = 0, i = 0;
        printf("Enter word:");
        scanf("%s", content[3]);
        while (content[3][i++] != '\0')
            cot++;
        if (cot == 4) /*judge if new words lager or smaller than used*/
        {
            if (strcmp(content[1], content[3]) <= 0)
                strcpy(content[1], content[3]);
            else if (strcmp(content[2], content[3]) >= 0)
                strcpy(content[2], content[3]);
            else
                ;
            printf("Smallest word:%s\n", content[2]);
            printf("Largest word:%s", content[1]);
            return 0;
        }
        else if (strcmp(content[1], content[3]) <= 0)
            strcpy(content[1], content[3]);
        else if (strcmp(content[2], content[3]) >= 0)
            strcpy(content[2], content[3]);
        else
            ;
    }
}
