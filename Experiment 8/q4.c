#include <stdio.h>
#include <string.h>

void StrLen();
void StrCmp();
void StrCpy();
void StrCat();

int main()
{
    int n;

menu:
    printf("1 -> strlen\n2 -> strcmp\n3 -> strcpy\n4 -> strcat\n5 -> exit\n[*]Choose an operation: ");
label:
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        StrLen();
        break;
    case 2:
        StrCmp();
        break;
    case 3:
        StrCpy();
        break;
    case 4:
        StrCat();
        break;
    case 5:
        return 0;
    default:
        printf("Invalid Operation\n[*]Choose another operation: ");
        goto label;
        break;
    }
    printf("\n");
    goto menu;
    return 0;
}

void StrLen()
{
    char s[50];
    printf("Enter a string: ");
    scanf("%s", s);

    int i = strlen(s);
    printf("\nStringLength: %d\n", i);
}

void StrCmp()
{
    int flag;
    char a[50], b[50];
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);
    flag = strcmp(a, b);
    if (flag == 0)
        printf("%s & %s are same\n", a, b);
    else
        printf("%s & %s are not same\n", a, b);
}

void StrCpy()
{
    char a[50], b[50];
    printf("Enter string 1: ");
    scanf("%s", a);
    strcpy(b, a);
    printf("\nString 1: %s\nString 2: %s\n", a, b);
}

void StrCat()
{
    char a[50], b[50];
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);
    strcat(a, b);
    printf("Result: %s\n", a);
}