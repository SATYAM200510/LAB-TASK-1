#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return gcd(b, a % b); 
}

int main() {
    int a, b;  
    printf("Enter number one: ");
    scanf("%d", &a); 
    printf("Enter number two: ");
    scanf("%d", &b);

    int result = gcd(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, result);
    
    return 0;
}
