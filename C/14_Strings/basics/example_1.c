#include <stdio.h>

int main() {
    char city[30];

    printf("Enter your city: ");

    scanf("%29s", city); // Limit input to 29 characters

    printf("You live in: %s\n", city);

    return 0;
}
