// Write a program to reverse a number using while loop. 
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Prompt the user for the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number using a while loop
    while (num != 0) {
        remainder = num % 10;               // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Append the digit
        num /= 10;                          // Remove the last digit
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
