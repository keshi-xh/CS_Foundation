# C Standard and Common Functions Documentation

This documentation covers all functions used in the C codebase, including standard library and user-defined functions. For each function, you will find:

1. **Basic Idea & Usage**
2. **Two Examples**
3. **Visualization**

---

## Contents

- [C Standard and Common Functions Documentation](#c-standard-and-common-functions-documentation)
  - [Contents](#contents)
  - [printf](#printf)
  - [scanf](#scanf)
  - [main](#main)
  - [return](#return)
  - [if / else](#if--else)
  - [for](#for)
  - [while](#while)
  - [do...while](#dowhile)

---

## printf

**Basic Idea & Usage:**
`printf` prints formatted output to the console. It supports format specifiers (like `%d`, `%f`, `%s`) for variables, and can print multiple values in one call. It returns the number of characters printed.

**Example 1:**

```c
printf("Hello, World!\n");
```

**Example 2:**

```c
int x = 5;
printf("Value: %d\n", x);
```

**Visualization:**

- Console output appears as text, e.g.:
  - Hello, World!
  - Value: 5
- Return value: `printf("abc")` returns 3.

---

## scanf

**Basic Idea & Usage:**
`scanf` reads formatted input from the user. It requires the address of variables (using `&`). It returns the number of input items successfully assigned, which can be used for input validation. It can skip whitespace and read multiple values at once.

**Example 1:**

```c
int n;
int result = scanf("%d", &n); // result is 1 if input is valid
```

**Example 2:**

```c
int a, b;
int count = scanf("%d %d", &a, &b); // count is 2 if both inputs are valid
```

**Visualization:**

- User types input, which is stored in the variable(s) provided.
- Return value: `scanf("%d %d", &a, &b)` returns 2 if both are read, 1 if only the first is read.

---

## main

**Basic Idea & Usage:**
`main` is the entry point of every C program. It returns an integer (usually 0 for success, nonzero for error). It can take arguments for command-line input (`int argc, char *argv[]`).

**Example 1:**

```c
int main() {
    return 0;
}
```

**Example 2:**

```c
int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);
    return 0;
}
```

**Visualization:**

- Program execution starts at `main` and ends when `main` returns.
- Return value is sent to the operating system.

---

## return

**Basic Idea & Usage:**
`return` ends a function and optionally sends a value back to the caller. In `main`, the return value is sent to the OS. You can return expressions, not just constants.

**Example 1:**

```c
return 0;
```

**Example 2:**

```c
return x + y;
```

**Visualization:**

- Function execution stops and control goes back to the calling function.
- In `main`, `return 0;` signals success.

---

## if / else

**Basic Idea & Usage:**
`if` and `else` are used for conditional execution. The condition can be any expression; zero is false, nonzero is true. You can chain multiple `else if` blocks. Curly braces are optional for single statements.

**Example 1:**

```c
if (x > 0)
    printf("Positive\n");
```

**Example 2:**

```c
if (x > 0) {
    printf("Positive\n");
} else if (x < 0) {
    printf("Negative\n");
} else {
    printf("Zero\n");
}
```

**Visualization:**

- Only the block whose condition is true is executed.
- Multiple branches can be checked in order.

---

## for

**Basic Idea & Usage:**
A `for` loop repeats a block of code a specific number of times. All three parts (init; condition; update) are optional. You can use `break` to exit early or `continue` to skip to the next iteration.

**Example 1:**

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}
```

**Example 2:**

```c
for (;;) { // infinite loop
    break;
}
```

**Visualization:**

- Loop variable changes each iteration; block runs repeatedly.
- Can be used for counting, iterating arrays, etc.

---

## while

**Basic Idea & Usage:**
A `while` loop repeats a block of code as long as a condition is true. The condition is checked before each iteration. You can use `break` and `continue` inside the loop.

**Example 1:**

```c
int i = 0;
while (i < 3) {
    printf("%d ", i);
    i++;
}
```

**Example 2:**

```c
while (getchar() != '\n') {
    // consume input until newline
}
```

**Visualization:**

- Condition checked before each iteration; may run zero or more times.
- Useful for input validation, reading until a condition is met.

---

## do...while

**Basic Idea & Usage:**
A `do...while` loop always runs at least once, then repeats as long as the condition is true. Useful for menus and input validation.

**Example 1:**

```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 3);
```

**Example 2:**

```c
char c;
do {
    c = getchar();
} while (c != 'q');
```

**Visualization:**

- Block runs, then condition is checked; repeats if true.
- Always executes at least once.

---

*These are the most common C functions and control structures. More functions (like string and math functions) can be added as needed. If you want documentation for specific library or user-defined functions, let me know!*

---
