#include <stdio.h>
#include <ctype.h>

void count(char *str, int *vowelCount, int *consonantCount) {
    *vowelCount = 0;    
    *consonantCount = 0; 

    while (*str != '\0') {
        char ch = tolower(*str); 

        if (isalpha(ch)) { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++; 
            } else {
                (*consonantCount)++;
            }
        }
        str++; 
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    count(str, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
