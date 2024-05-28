// Write a c program to count the number of vowels and consonants in a string. 
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Prompt the user for the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert to lowercase for easier comparison
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print the result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

