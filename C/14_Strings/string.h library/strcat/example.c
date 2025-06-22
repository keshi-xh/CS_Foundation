#include <stdio.h>
#include <string.h> // Include string.h for strcat function

// Main function
int main() {
    char str1[100]; // Declare array to store the first string
    char str2[50]; // Declare array to store the second string

    // Input first string
    printf("Enter first string: ");
    scanf("%49s", str1); // Read first string input

    // Input second string
    printf("Enter second string: ");
    scanf("%49s", str2); // Read second string input

    // Display original strings
    printf("\nBefore concatenation:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    // Use strcat to join the strings
    strcat(str1, str2); // strcat adds str2 to the end of str1

    // Display result
    printf("\nAfter concatenation:\n");
    printf("Result: %s\n", str1);

    // Additional examples with predefined strings
    printf("\n--- More Examples ---\n");
    char word1[50] = "Hello"; // Initialize with "Hello"
    char word2[] = " World"; // Second string to add
    
    printf("Before: word1 = \"%s\"\n", word1);
    strcat(word1, word2); // Add " World" to "Hello"
    printf("After strcat(word1, \" World\"): word1 = \"%s\"\n", word1);
    
    char greeting[100] = "Good";
    strcat(greeting, " Morning"); // Add " Morning" to "Good"
    printf("After strcat(greeting, \" Morning\"): greeting = \"%s\"\n", greeting);

    return 0; // Indicate successful execution
}