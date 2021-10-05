#include <stdio.h>

int main()
{
    char str1[80], str2[80];
    int l, i, j;

    printf("Enter string: ");
    gets(str1);

    printf("\nEnter substring: ");
    gets(str2);

    for (l = 0; str2[l] != '\0'; l++);

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("Found at Position: %d\n", i - j + 1);
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}