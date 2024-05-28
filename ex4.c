// Write a c program to find the sum of the first n natural numbers.  
#include <stdio.h>

int main() {
    int n, sum = 0;

    // enter value from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
