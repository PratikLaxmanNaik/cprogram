// Write a program to find the sum and average of elements in an array. 
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    float average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
//  take input from user 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average
    if (n > 0) {
        average = (float)sum / n;
    } else {
        average = 0.0;
    }

    // Print the sum and average
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}

