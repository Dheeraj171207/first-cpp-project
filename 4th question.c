
#include <stdio.h>
#include <string.h>

int isPal(char s[], int l, int r) {
    if (l >= r)
        return 1;
    if (s[l] != s[r])
        return 0;
    return isPal(s, l + 1, r - 1);
}

int main() {
    char s[100];
    printf("Enter a word: ");
    scanf("%99s", s);
    if (isPal(s, 0, strlen(s) - 1))
        printf("%s is a palindrome\n", s);
    else
        printf("%s is not a palindrome\n", s);
    return 0;
}
