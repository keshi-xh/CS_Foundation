#include <stdio.h>
#include <string.h> // Include string.h for strcmp function

// Main function
int main() {
    char str1[50], str2[50]; // Declare two character arrays to store strings
    int result; // Variable to store the result of strcmp

    // Input first string
    printf("Enter first string: ");
    scanf("%s", str1); // Read first string (note: no & needed for arrays)

    // Input second string  
    printf("Enter second string: ");
    scanf("%s", str2); // Read second string

    // Compare the two strings using strcmp
    result = strcmp(str1, str2); // strcmp returns: 0 if equal, <0 if str1<str2, >0 if str1>str2

    // Display the strings
    printf("\nFirst string: %s\n", str1);
    printf("Second string: %s\n", str2);

    // Interpret and display the comparison result
    if (result == 0) {
        printf("Result: The strings are identical (strcmp returned %d)\n", result);
    }
    else if (result < 0) {
        printf("Result: First string comes before second string alphabetically (strcmp returned %d)\n", result);
    }
    else {
        printf("Result: First string comes after second string alphabetically (strcmp returned %d)\n", result);
    }

//     // Additional examples with predefined strings
//     printf("\n--- Additional Examples ---\n");
    
//     // Example 1: Identical strings
//     printf("strcmp(\"hello\", \"hello\") = %d\n", strcmp("hello", "hello"));
    
//     // Example 2: First string alphabetically before second
//     printf("strcmp(\"apple\", \"banana\") = %d\n", strcmp("apple", "banana"));
    
//     // Example 3: First string alphabetically after second
//     printf("strcmp(\"zebra\", \"apple\") = %d\n", strcmp("zebra", "apple"));
    
//     // Example 4: Case sensitivity demonstration
//     printf("strcmp(\"Hello\", \"hello\") = %d\n", strcmp("Hello", "hello"));

//     return 0; // Indicate successful execution
}