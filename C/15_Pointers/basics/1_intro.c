#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ==================================================
// EXAMPLE 1: BASIC POINTER CONCEPTS
// ==================================================

void main() {
    printf("=== EXAMPLE 1: BASIC POINTER CONCEPTS ===\n");
    
    // Regular variable
    int num = 42;
    
    // Pointer declaration and initialization
    int *ptr = &num;  // ptr stores the address of num
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address it points to): %p\n", (void*)ptr);
    printf("Value at address pointed by ptr: %d\n", *ptr);
    
    // Modifying through pointer
    *ptr = 100;  // Changes the value of num through pointer
    printf("After *ptr = 100, num = %d\n", num);
    
    printf("\n");
}
