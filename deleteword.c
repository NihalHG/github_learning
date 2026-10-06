#include <stdio.h>
#include <string.h>

int main()
{
    int lenword, lenstring, i, k, flag = 0, j;
    char s[500], w[50];

    printf("Enter the string:\n");
    scanf("%[^#]", s);
    getchar(); // To consume #

    printf("Enter the word to be deleted from the string:\n");
    scanf("%[^@]", w);

    for(i = 0; s[i] != '\0'; i++);
    lenstring = i;

    for(i = 0; w[i] != '\0'; i++);
    lenword = i;

    for(i = 0; i <= lenstring - lenword; i++)
    {
        for(j = 0; j < lenword; j++)
        {
            if(s[i+j] != w[j])
                break;
        }

        if(j == lenword)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        for(k = i; k < lenstring - lenword; k++)
        {
            s[k] = s[k + lenword];
        }

        s[k] = '\0';
    }
    else
    {
        printf("The word not found in the given string\n");
        return 0;
    }

    printf("The modified string is:\n");
    printf("%s", s);

    return 0;
}