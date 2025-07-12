#include <stdio.h>

// Modify by value (original unchanged)
void add_one(int num) {
    num += 1;  // Changes only local copy
}

// Modify through pointer (original changed)
void add_one_ptr(int *num) {
    (*num) += 1;  // Dereference to modify original
}

int main() {
    int a = 5;
    
    add_one(a);
    printf("Without pointer: %d\n", a);  // Still 5
    
    add_one_ptr(&a);  // Pass address of a
    printf("With pointer: %d\n", a);     // Now 6
    
    return 0;
}