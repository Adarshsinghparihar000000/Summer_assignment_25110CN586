#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum from 1 to n
    for(int i = 1; i <= n; i++) {
        sum += i; 
    }

    // result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
