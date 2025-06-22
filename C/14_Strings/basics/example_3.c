#include <stdio.h>

// Function to compare two strings character by character
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    // Loop until either string ends
    while(str1[i] && str2[i]) {
        if(str1[i] != str2[i]) // If characters differ, strings are not equal
            return 0;
        i++;
    }
    // If both strings end at the same time, they are equal
    return str1[i] == str2[i];
}

int main() {
    char s1[50], s2[50];

    // Prompt user to enter first string
    printf("Enter string 1: ");
    // Use width specifier to prevent buffer overflow (reads up to 49 characters)
    scanf("%49s", s1);

    // Prompt user to enter second string
    printf("Enter string 2: ");
    // Use width specifier to prevent buffer overflow (reads up to 49 characters)
    scanf("%49s", s2);

    // Compare the two strings using stringCompare function
    if(stringCompare(s1, s2))
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    return 0;
}
