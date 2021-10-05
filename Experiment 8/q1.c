#include <stdio.h>
#include <string.h>

int main()
{
    char s[60];
    int i, n, c = 0;

    printf("Enter a string: ");
    fgets(s, 50, stdin);
    n = strlen(s) - 1;
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            c++;
    }
    if (c == i)
        printf("\n%s is palindrome\n", s);
    else
        printf("\n%s is not palindrome\n", s);

    return 0;
}