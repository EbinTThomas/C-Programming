#include <stdio.h>
#include <string.h>

void rev(char *word);

int main() {
    char word[50];
    printf("Enter a word: ");
    fgets(word, 50, stdin);

    rev(word);
}

void rev(char *word) {
    char revword[50];
    int n=strlen(word);
    for (int i=0; i<=n; i++) {
        revword[i]=word[n-i-1];
    }
    printf("\nReverse: %s\n", revword);
}