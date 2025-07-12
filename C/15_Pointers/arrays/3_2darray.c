#include <stdio.h>
#include <string.h>

int main() {
    // Array of pointers to string literals
    // - Memory efficient for variable-length strings
    // - Strings are stored in read-only memory (can't be modified)
    char *names_ptr[] = {"Alice", "Bob", "Charlie"};
    
    // True 2D character array
    // - Fixed-width storage (wastes space for shorter strings)
    // - Strings are modifiable (stored in contiguous memory)
    char names_arr[3][10] = {"Alice", "Bob", "Charlie"};

    printf("========== ARRAY OF POINTERS ==========\n");
    printf("Memory layout: Pointers + string literals\n\n");
    
    printf("Total size of names_ptr array: %zu bytes\n", sizeof(names_ptr));
    printf("(3 pointers * %zu bytes each)\n\n", sizeof(char*));
    
    for(int i = 0; i < 3; i++) {
        printf("names_ptr[%d]:\n", i);
        printf("  Pointer address: %p\n", (void*)names_ptr[i]);
        printf("  Points to: \"%s\"\n", names_ptr[i]);
        printf("  String size: %zu bytes\n", sizeof(names_ptr[i]));
        printf("  Actual memory used: %zu bytes\n\n", (strlen(names_ptr[i]) + 1) * sizeof(char));
        // Note: sizeof("Alice") includes null terminator
    }

    printf("\n========== 2D CHARACTER ARRAY ==========\n");
    printf("Memory layout: Single contiguous block\n\n");
    
    printf("Total size of names_arr array: %zu bytes\n", sizeof(names_arr));
    printf("(3 rows * 10 columns * %zu byte per char)\n\n", sizeof(char));
    
    for(int i = 0; i < 3; i++) {
        printf("names_arr[%d]:\n", i);
        printf("  Array address: %p\n", (void*)names_arr[i]);
        printf("  Contains: \"%s\"\n", names_arr[i]);
        printf("  Allocated space: %zu bytes\n", sizeof(names_arr[i]));
        printf("  Actual memory used: %zu bytes\n\n", (strlen(names_arr[i]) + 1) * sizeof(char));
    }

    printf("\n========== KEY DIFFERENCES ==========\n");
    printf("1. Memory Efficiency:\n");
    printf("   Pointers: ~%d bytes total\n", 
           (int)(sizeof(names_ptr) + sizeof("Alice") + sizeof("Bob") + sizeof("Charlie")));
    printf("   2D Array: %d bytes total\n\n", (int)sizeof(names_arr));
    
    printf("2. Address Pattern:\n");
    printf("   Pointers: Non-contiguous (different memory segments)\n");
    printf("   2D Array: Contiguous (addresses sequential)\n\n");
    
    printf("3. Modifiability:\n");
    // Attempt modification (2D array is safe)
    // names_ptr[0][0] = 'a';  // This would CRASH (trying to modify read-only memory)
    names_arr[0][0] = 'a';     // This is safe
    
    printf("   Pointer array: Cannot modify strings (read-only)\n");
    printf("   2D array: Can modify strings (copied to stack)\n");
    printf("   Modified: names_arr[0] = \"%s\"\n", names_arr[0]);

    return 0;
}