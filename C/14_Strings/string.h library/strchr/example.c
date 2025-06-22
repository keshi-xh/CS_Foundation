#include <stdio.h>
#include <string.h> // Include string.h for strchr function

// Main function
int main() {
    char str[50]; // Declare a character array to store the string
    char ch; // Variable to store the character to search for
    char *result; // Pointer to store the result of strchr

    // Input string
    printf("Enter a string: ");
    scanf("%s", str); // Read string input

    // Input character to search for
    printf("Enter character to find: ");
    scanf(" %c", &ch); // Read character input (space before %c is important)

    // Use strchr to find the character
    result = strchr(str, ch); // strchr returns pointer if found, NULL if not found

    // Display results
    printf("\nString: %s\n", str);
    printf("Looking for: %c\n", ch);

    // Check if character was found
    if (result != NULL) {
        printf("Found! Character '%c' is in the string.\n", ch);
    }
    else {
        printf("Not found! Character '%c' is not in the string.\n", ch);
    }

    return 0; // Indicate successful execution
}