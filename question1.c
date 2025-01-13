#include <stdio.h>

void binary(int n) {
    int binary[32]; 
    int index = 0;

    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        binary[index] = n % 2; 
        n /= 2;                
        index++;               
    } 
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation: ");
    binary(number);  
    printf("\n");

    return 0;
}
