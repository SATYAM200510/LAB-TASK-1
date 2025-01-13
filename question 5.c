#include <stdio.h>

int flength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++; 
        str++;  
    }
    return length;
}
int main() {
    char str[100];
    int length;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *newline = str;
    while (*newline != '\0') {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }
    length = flength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}
