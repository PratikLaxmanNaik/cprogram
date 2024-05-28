// Write a function to find the minimum of three numbers. 
#include <stdio.h>

// Function to find the minimum of three numbers
int findMinimum(int a, int b, int c) {
    int min = a; // Assume a is the smallest initially

    if (b < min) {
        min = b; // Update min if b is smaller
    }
    if (c < min) {
        min = c; // Update min if c is smaller
    }

    return min;
}

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call the function to find the minimum of the three numbers
    int minimum = findMinimum(num1, num2, num3);

    // Print the result
    printf("The minimum of %d, %d, and %d is: %d\n", num1, num2, num3, minimum);

    return 0;
}
