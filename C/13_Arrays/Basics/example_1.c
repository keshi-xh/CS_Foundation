#include <stdio.h>

// Main function
int main() {
    int score[10]; // Declare an array to store 10 integers

    // Input 10 numbers
    for (int i = 0; i < 10; i++) {
        printf("Enter score %d: ", i + 1); // Prompt user for input
        scanf("%d", &score[i]); // Read input and store in array
    }

    // Display the array
    printf("The scores are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", score[i]); // Print each score
    }
    printf("\n"); // Print newline

    return 0; // Indicate successful execution
}
hi