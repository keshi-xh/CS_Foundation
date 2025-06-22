#include <stdio.h>
#include <string.h> // Include string.h for strcpy function

// Main function
int main() {
    char source[100]; // Declare array to store the source string
    char destination[100]; // Declare array to store the copied string

    // Input source string
    printf("Enter a string to copy: ");
    scanf("%99s", source); // Read string input

    // Use strcpy to copy the string
    strcpy(destination, source); // strcpy copies source string to destination

    // Display results
    printf("\nSource string: %s\n", source);
    printf("Copied string: %s\n", destination);

    // Verify they are the same
    if (strcmp(source, destination) == 0) {
        printf("Success! The strings are identical.\n");
    }

    // Additional examples with predefined strings
    printf("\n--- More Examples ---\n");
    char str1[50], str2[50], str3[50];
    
    strcpy(str1, "hello"); // Copy "hello" to str1
    printf("After strcpy(str1, \"hello\"): str1 = %s\n", str1);
    
    strcpy(str2, "programming"); // Copy "programming" to str2
    printf("After strcpy(str2, \"programming\"): str2 = %s\n", str2);
    
    strcpy(str3, str1); // Copy str1 to str3
    printf("After strcpy(str3, str1): str3 = %s\n", str3);

    return 0; // Indicate successful execution
}