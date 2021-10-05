#include <stdio.h>
#include <string.h>

void concat(char[], char[]);

int main()
{
    char s1[50], s2[30];
    printf("\nEnter String 1 ending with $: ");
    fgets(s1, 50, stdin);

    printf("\nEnter String 2 ending with $: ");
    fgets(s2, 50, stdin);

    concat(s1, s2);
    printf("\nConcated string is: %s\n", s1);

    return 0;
}

void concat(char s1[], char s2[])
{
    int i, j;
    i = strlen(s1) - 2;
    for (j = 0; s2[j] != '$'; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}