#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], vowels[10] = {"aeiouAEIOU"};
    int n, space = 0, vcount = 0, ccount = 0;
    printf("Enter a string ending with $:\n");
    fgets(str, 50, stdin);
    n = strlen(str) - 2;

    for (int i = 0; str[i] != '$'; i++)
    {
        if (str[i] == ' ')
            space++;
        else
        {
            for (int j = 0; j < 10; j++)
            {
                if (vowels[j] == str[i])
                    vcount++;
            }
        }
    }
    ccount = n - space - vcount;
    printf("Spaces: %d\nVowels: %d\nConsonants: %d\n", space, vcount, ccount);

    return 0;
}