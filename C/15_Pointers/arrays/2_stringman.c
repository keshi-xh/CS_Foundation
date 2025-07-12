// ==================================================
// EXAMPLE 2: STRINGS - ARRAY vs POINTER
// ==================================================

void main() {
    printf("=== EXAMPLE 5: STRINGS ===\n");
    
    // String as character array
    char str_array[] = "Hello World";  // Stored in stack, modifiable
    
    // String as pointer to string literal
    char *str_pointer = "Hello World";  // Points to string literal, not modifiable
    
    printf("String as array: %s\n", str_array);
    printf("String as pointer: %s\n", str_pointer);
    
    // Modify array (this works)
    str_array[0] = 'h';
    printf("After modifying array: %s\n", str_array);
    
    // Modify pointer content (this would cause undefined behavior)
    // str_pointer[0] = 'h';  // DON'T DO THIS - undefined behavior
    
    // But we can make pointer point to different string
    str_pointer = "Goodbye World";
    printf("After reassigning pointer: %s\n", str_pointer);
    
    // Show memory usage
    printf("Array size: %zu bytes\n", sizeof(str_array));
    printf("Pointer size: %zu bytes\n", sizeof(str_pointer));
    
    printf("\n");
}