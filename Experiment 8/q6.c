#include <stdio.h>
#include <string.h>

int substring_count(char *, char *);
int main()
{
    char string[100];
    char substring[20];
    int count = 0;

    printf("Enter a string: ");
    gets(string);

    printf("Enter a substring: ");
    gets(substring);

    count = substring_count(string, substring);

    printf("Substring occurrence count is: %d.\n", count);

    return 0;
}

int substring_count(char *string, char *substring)
{
    int i, j, l1, l2;
    int count = 0;
    int found = 0;

    l1 = strlen(string);
    l2 = strlen(substring);

    for (i = 0; i < l1 - l2 + 1; i++)
    {
        found = 1;
        for (j = 0; j < l2; j++)
        {
            if (string[i + j] != substring[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            count++;
            i = i + l2 - 1;
        }
    }

    return count;
}