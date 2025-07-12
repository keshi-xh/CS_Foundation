#include <stdio.h>
#include <string.h>

int main(void) {
    // 1) Define a pointer to a string literal.
    //    The literal "Hello, world!" is stored in read-only memory.
    //    'msg1' points at its first character.
    const char *msg1 = "Hello, world!";
    
    // 2) Define a mutable array of chars initialized with the same text.
    //    This allocates a buffer of length strlen(msg1)+1 on the stack,
    //    copies the literal into it, and allows modifications.
    char msg2[] = "Hello, world!";

    // --- Printing both strings ---
    printf("msg1 points to: %s\n", msg1);
    printf("msg2 array     : %s\n\n", msg2);

    // --- Pointer arithmetic demo with msg1 ---
    printf("Characters in msg1 via pointer arithmetic:\n");
    const char *p = msg1;      // p initially points at 'H'
    while (*p != '\0') {       // loop until we hit the null terminator
        putchar(*p);           // print the character
        p++;                   // advance pointer to next char
    }
    putchar('\n');
    putchar('\n');

    // --- Attempting to modify msg1 (undefined!) ---
    // Uncommenting the next two lines will often crash your program,
    // because string literals reside in read-only memory:
    //
    // msg1[0] = 'h';
    // printf("Modified msg1: %s\n", msg1);
    //
    // Instead, you must copy it into writable memory first (see msg2).

    // --- Modifying the mutable array msg2 ---
    printf("Before modifying msg2: %s\n", msg2);
    msg2[0] = 'h';             // safe: msg2 lives in writable memory
    printf(" After modifying msg2: %s\n", msg2);

    return 0;
}
