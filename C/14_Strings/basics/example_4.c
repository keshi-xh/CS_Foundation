#include <stdio.h>

// Function to concatenate src string to dest string
void stringConcat(char dest[], char src[]) {
    int i = 0, j = 0;
    // Find the end of dest string
    while(dest[i]) i++;
    // Copy src to the end of dest
    while(src[j]) dest[i++] = src[j++];
    dest[i] = '\0'; // Add null terminator at the end
}

int main() {
    char first[50], last[50];

    // Prompt user for first name
    printf("Enter first name: ");
    // Use fgets to read input (including spaces, if any)
    fgets(first, sizeof(first), stdin);

    // Remove newline character if present
    int len = 0;
    while(first[len] != '\0') {
        if(first[len] == '\n') {
            first[len] = '\0';
            break;
        }
        len++;
    }

    // Prompt user for last name
    printf("Enter last name: ");
    fgets(last, sizeof(last), stdin);

    // Remove newline character if present
    len = 0;
    while(last[len] != '\0') {
        if(last[len] == '\n') {
            last[len] = '\0';
            break;
        }
        len++;
    }

    // Concatenate a space to the first name
    stringConcat(first, " ");
    // Concatenate the last name to the first name
    stringConcat(first, last);

    // Print the full name
    printf("Full name: %s\n", first);
    return 0;
}
