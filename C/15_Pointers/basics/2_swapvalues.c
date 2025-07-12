#include <stdio.h>

// Without pointers (values NOT swapped outside function)
void swap_no_ptr(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// With pointers (values swapped in original memory locations)
void swap_with_ptr(int *a, int *b) {
    int temp = *a;   // Dereference to get value at address
    *a = *b;         // Assign value at b's address to a's address
    *b = temp;       // Assign temp value to b's address
}

int main() {
    int x = 5, y = 10;
    int *ptr_x = &x; // Declare a pointer to x
    int *ptr_y = &y; // Declare a pointer to y
    char *char_ptr;  // Declare a char pointer for size demonstration

    // Attempt swap without pointers
    swap_no_ptr(x, y);
    printf("Without pointers: x=%d, y=%d (unchanged)\n", x, y);

    // Swap using pointers
    swap_with_ptr(&x, &y);   // Pass addresses of x and y
    printf("With pointers: x=%d, y=%d (swapped)\n", x, y);

    printf("\n--- Pointer Information ---\n");

    // Printing the address of a pointer variable itself
    printf("Address of ptr_x variable: %p\n", (void *)&ptr_x);
    printf("Address of ptr_y variable: %p\n", (void *)&ptr_y);

    // Printing the address *stored inside* the pointer (i.e., what it points to)
    printf("Address stored in ptr_x (points to x): %p\n", (void *)ptr_x);
    printf("Address stored in ptr_y (points to y): %p\n", (void *)ptr_y);

    // Printing the size of pointer variables
    // Use sizeof(pointer_variable)
    printf("Size of ptr_x (an int*): %zu bytes\n", sizeof(ptr_x));
    printf("Size of ptr_y (an int*): %zu bytes\n", sizeof(ptr_y));

    // Demonstrate that all pointer types generally have the same size
    // regardless of what they point to (on a given architecture)
    printf("Size of char_ptr (a char*): %zu bytes\n", sizeof(char_ptr));
    printf("Size of a void* (generic pointer): %zu bytes\n", sizeof(void *));


    return 0;
}