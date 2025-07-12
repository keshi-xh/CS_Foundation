#include <stdio.h>

void addTen(int n) {
    // This function works on a copy of the value.
    n = n + 10;
    printf("Inside addTen (non-pointer): %d\n", n);
}

void addTenPtr(int* n) {
    // This function directly modifies the original value using pointer.
    *n = *n + 10;
    printf("Inside addTenPtr (with pointer): %d\n", *n);
}

int main() {
    int num = 5;

    printf("Original value: %d\n", num);
    
    addTen(num); // Pass by value
    printf("After addTen: %d\n", num); // No change, still 5

    addTenPtr(&num); // Pass by reference (address)
    printf("After addTenPtr: %d\n", num); // Changed to 15

    return 0;
}
