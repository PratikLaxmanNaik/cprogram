// Write a program to print the multiplication table of a given number.
#include <stdio.h>

int main() {
    int num;

    // Prompt the user for the number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
