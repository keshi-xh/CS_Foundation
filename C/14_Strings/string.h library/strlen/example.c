#include <stdio.h>
#include <string.h> // Include string.h for strlen function

// Main function
int main() {
    char str[100]; // Declare a character array to store the string
    int length; // Variable to store the length of the string

    // Input string
    printf("Enter a string: ");
    scanf("%99s", str); // Read string input

    // Use strlen to find the length
    length = strlen(str); // strlen returns the number of characters (excluding null terminator)

    // Display results
    printf("\nString: %s\n", str);
    printf("Length: %d characters\n", length);

    // Additional examples with predefined strings
    printf("\n--- More Examples ---\n");
    printf("strlen(\"hello\") = %lu\n", strlen("hello"));
    printf("strlen(\"programming\") = %lu\n", strlen("programming"));
    printf("strlen(\"\") = %lu\n", strlen("")); // Empty string has length 0

    return 0; // Indicate successful execution
}