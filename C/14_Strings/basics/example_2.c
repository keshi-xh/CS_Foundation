#include <stdio.h>

#define MAX_LEN 49 // Reserve 1 byte for the null terminator

// Function to calculate the length of a string
int stringLength(char str[]) {
    int len = 0;
    // Loop until the null terminator is found
    while(str[len] != '\0') len++;
    return len;
}

int main() {
    char word[MAX_LEN + 1]; // +1 for the null terminator

    printf("Enter a word (max %d characters): ", MAX_LEN);
    // Use width specifier to prevent buffer overflow
    scanf("%49s", word);

    // Print the length of the entered word
    printf("Length = %d\n", stringLength(word));
    return 0;
}
