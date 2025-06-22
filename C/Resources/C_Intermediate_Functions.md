# Essential C Functions Every Intermediate Programmer Should Know

---

## Contents

- [Essential C Functions Every Intermediate Programmer Should Know](#essential-c-functions-every-intermediate-programmer-should-know)
  - [Contents](#contents)
  - [\<stdio.h\> — Standard Input/Output](#stdioh--standard-inputoutput)
    - [printf](#printf)
    - [scanf](#scanf)
    - [sprintf / snprintf](#sprintf--snprintf)
    - [fprintf](#fprintf)
    - [fscanf](#fscanf)
    - [fgets](#fgets)
    - [fputs / fputc / fgetc](#fputs--fputc--fgetc)
    - [fopen / fclose](#fopen--fclose)
    - [feof / ferror](#feof--ferror)
    - [rewind / fseek / ftell](#rewind--fseek--ftell)
  - [\<stdlib.h\> — Standard Library](#stdlibh--standard-library)
    - [malloc / calloc / realloc / free](#malloc--calloc--realloc--free)
    - [exit](#exit)
    - [system](#system)
    - [atoi / atof / atol](#atoi--atof--atol)
    - [rand / srand](#rand--srand)
    - [qsort](#qsort)
    - [bsearch](#bsearch)
  - [\<string.h\> — String Manipulation](#stringh--string-manipulation)
    - [strcpy / strncpy](#strcpy--strncpy)
    - [strcat / strncat](#strcat--strncat)
    - [strcmp / strncmp](#strcmp--strncmp)
    - [strlen](#strlen)
    - [strchr / strrchr](#strchr--strrchr)
    - [strstr](#strstr)
    - [memset](#memset)
    - [memcpy / memmove](#memcpy--memmove)
  - [\<time.h\> — Time and Date Functions](#timeh--time-and-date-functions)
    - [time](#time)
    - [ctime](#ctime)
    - [asctime](#asctime)
    - [localtime](#localtime)
    - [gmtime](#gmtime)
    - [difftime](#difftime)
    - [clock](#clock)
  - [\<ctype.h\> — Character Classification and Conversion](#ctypeh--character-classification-and-conversion)
    - [isalpha](#isalpha)
    - [isdigit](#isdigit)
    - [isalnum](#isalnum)
    - [isspace](#isspace)
    - [toupper](#toupper)
    - [tolower](#tolower)
  - [\<assert.h\> — Diagnostics](#asserth--diagnostics)
    - [assert](#assert)

## <stdio.h> — Standard Input/Output

### printf

**Basic Idea & Usage:**
Prints formatted output to the console. Supports format specifiers (e.g., `%d`, `%f`, `%s`). Returns the number of characters printed.

**Example 1:**

```c
printf("Hello, %s!\n", "world");
```

**Example 2:**

```c
int n = 42;
printf("Value: %d\n", n);
```

**Visualization:**

- Output: `Hello, world!` and `Value: 42`
- Return value: `printf("abc")` returns 3

---

### scanf

**Basic Idea & Usage:**
Reads formatted input from the user. Requires variable addresses (e.g., `&x`). Returns the number of items successfully read.

**Example 1:**

```c
int x;
scanf("%d", &x);
```

**Example 2:**

```c
char name[20];
scanf("%s", name);
```

**Visualization:**

- User types input, which is stored in the variable(s).
- Return value: `scanf("%d %d", &a, &b)` returns 2 if both are read.

---

### sprintf / snprintf

**Basic Idea & Usage:**
`sprintf` writes formatted output to a string. `snprintf` limits the number of characters written (safer).

**Example 1:**

```c
char buf[100];
sprintf(buf, "Pi: %.2f", 3.14159);
```

**Example 2:**

```c
char buf[10];
snprintf(buf, sizeof(buf), "%.5s", "abcdef");
```

**Visualization:**

- `buf` contains the formatted string, e.g., `"Pi: 3.14"` or `"abcde"`.

---

### fprintf

**Basic Idea & Usage:**
Prints formatted output to a file or stream.

**Example 1:**

```c
FILE *f = fopen("out.txt", "w");
fprintf(f, "Hello, file!\n");
fclose(f);
```

**Example 2:**

```c
fprintf(stderr, "Error: %d\n", 404);
```

**Visualization:**

- Output goes to a file or stderr, not the console.

---

### fscanf

**Basic Idea & Usage:**
Reads formatted input from a file or stream.

**Example 1:**

```c
FILE *f = fopen("data.txt", "r");
int n;
fscanf(f, "%d", &n);
fclose(f);
```

**Example 2:**

```c
char word[20];
fscanf(stdin, "%s", word);
```

**Visualization:**

- Reads data from a file or stream into variables.

---

### fgets

**Basic Idea & Usage:**
Reads a line of text from a file or stdin, including spaces, up to a limit or newline.

**Example 1:**

```c
char buf[100];
fgets(buf, sizeof(buf), stdin);
```

**Example 2:**

```c
FILE *f = fopen("file.txt", "r");
fgets(buf, sizeof(buf), f);
fclose(f);
```

**Visualization:**

- `buf` contains the line read, including the newline if present.

---

### fputs / fputc / fgetc

**Basic Idea & Usage:**

- `fputs`: Writes a string to a file/stream.
- `fputc`: Writes a character to a file/stream.
- `fgetc`: Reads a character from a file/stream.

**Example 1:**

```c
FILE *f = fopen("out.txt", "w");
fputs("Hello!\n", f);
fclose(f);
```

**Example 2:**

```c
FILE *f = fopen("in.txt", "r");
char c = fgetc(f);
fclose(f);
```

**Visualization:**

- Characters/strings are written to or read from files.

---

### fopen / fclose

**Basic Idea & Usage:**

- `fopen`: Opens a file and returns a pointer to it.
- `fclose`: Closes an open file.

**Example 1:**

```c
FILE *f = fopen("data.txt", "r");
if (f) fclose(f);
```

**Example 2:**

```c
FILE *f = fopen("log.txt", "a");
fclose(f);
```

**Visualization:**

- File pointer is valid after `fopen`, invalid after `fclose`.

---

### feof / ferror

**Basic Idea & Usage:**

- `feof`: Checks if end-of-file has been reached.
- `ferror`: Checks for file errors.

**Example 1:**

```c
while (!feof(f)) {
    // read file
}
```

**Example 2:**

```c
if (ferror(f)) {
    printf("File error!\n");
}
```

**Visualization:**

- Used in file reading loops and error handling.

---

### rewind / fseek / ftell

**Basic Idea & Usage:**

- `rewind`: Sets file position to the beginning.
- `fseek`: Moves file position to a specific location.
- `ftell`: Returns current file position.

**Example 1:**

```c
FILE *f = fopen("data.txt", "r");
fseek(f, 0, SEEK_END);
long size = ftell(f);
rewind(f);
fclose(f);
```

**Example 2:**

```c
fseek(f, 10, SEEK_SET); // Move to byte 10
```

**Visualization:**

- File pointer moves within the file; useful for random access and file size.

---

## <stdlib.h> — Standard Library

### malloc / calloc / realloc / free

**Basic Idea & Usage:**

- `malloc`: Allocates a block of memory of given size (uninitialized).
- `calloc`: Allocates memory for an array and initializes to zero.
- `realloc`: Changes the size of a previously allocated block.
- `free`: Releases previously allocated memory.

**Example 1:**

```c
int *arr = malloc(10 * sizeof(int));
free(arr);
```

**Example 2:**

```c
int *arr = calloc(5, sizeof(int));
arr = realloc(arr, 10 * sizeof(int));
free(arr);
```

**Visualization:**

- Memory is allocated on the heap and must be freed to avoid leaks.

---

### exit

**Basic Idea & Usage:**
Terminates the program immediately, returning a status code to the OS.

**Example 1:**

```c
if (error) exit(1);
```

**Example 2:**

```c
exit(EXIT_SUCCESS);
```

**Visualization:**

- Program stops running; code after `exit` is not executed.

---

### system

**Basic Idea & Usage:**
Executes a shell command from within the C program. Use with caution (security risk).

**Example 1:**

```c
system("cls"); // Clear screen on Windows
```

**Example 2:**

```c
system("ls"); // List files on Unix
```

**Visualization:**

- The command runs as if typed in the terminal.

---

### atoi / atof / atol

**Basic Idea & Usage:**
Convert a string to an integer (`atoi`), float (`atof`), or long (`atol`). No error checking—invalid input returns 0.

**Example 1:**

```c
int n = atoi("123"); // n = 123
```

**Example 2:**

```c
double x = atof("3.14"); // x = 3.14
```

**Visualization:**

- Converts numeric strings to numbers; non-numeric input yields 0.

---

### rand / srand

**Basic Idea & Usage:**

- `rand`: Returns a pseudo-random integer between 0 and `RAND_MAX`.
- `srand`: Seeds the random number generator.

**Example 1:**

```c
srand(time(NULL));
int r = rand();
```

**Example 2:**

```c
int r = rand() % 10; // Random number 0-9
```

**Visualization:**

- Use `srand` once to seed; `rand` gives different values each run.

---

### qsort

**Basic Idea & Usage:**
Sorts an array using the quicksort algorithm. Requires a comparison function.

**Example 1:**

```c
int arr[5] = {3, 1, 4, 1, 5};
qsort(arr, 5, sizeof(int), cmp);
```

**Example 2:**

```c
char *words[] = {"cat", "dog", "bat"};
qsort(words, 3, sizeof(char *), cmp_str);
```

**Visualization:**

- Array is sorted in place; comparison function defines order.

---

### bsearch

**Basic Idea & Usage:**
Performs binary search on a sorted array. Requires a comparison function.

**Example 1:**

```c
int arr[5] = {1, 2, 3, 4, 5};
int key = 3;
int *found = bsearch(&key, arr, 5, sizeof(int), cmp);
```

**Example 2:**

```c
char *words[] = {"bat", "cat", "dog"};
char *target = "cat";
char **found = bsearch(&target, words, 3, sizeof(char *), cmp_str);
```

**Visualization:**

- Returns pointer to found element or NULL if not found.

---

## <string.h> — String Manipulation

### strcpy / strncpy

**Basic Idea & Usage:**

- `strcpy`: Copies a string (including the null terminator) from source to destination. No bounds checking—can cause buffer overflows.
- `strncpy`: Copies up to `n` characters. If source is shorter, pads with `\0`. Safer, but may not null-terminate if `n` is reached.

**Example 1:**

```c
char dest[20];
strcpy(dest, "hello");
```

**Example 2:**

```c
char dest[5];
strncpy(dest, "abcdef", 4);
dest[4] = '\0'; // Ensure null-termination
```

**Visualization:**

- `dest` contains a copy of the source string.
- Watch for buffer size and null-termination with `strncpy`.

---

### strcat / strncat

**Basic Idea & Usage:**

- `strcat`: Appends one string to another. No bounds checking.
- `strncat`: Appends up to `n` characters. Safer, but still requires enough space in destination.

**Example 1:**

```c
char s[20] = "Hi, ";
strcat(s, "there!");
```

**Example 2:**

```c
char s[10] = "abc";
strncat(s, "defgh", 3); // Appends "def"
```

**Visualization:**

- Destination string grows; ensure enough space to avoid overflow.

---

### strcmp / strncmp

**Basic Idea & Usage:**

- `strcmp`: Compares two strings lexicographically. Returns 0 if equal, <0 if first < second, >0 if first > second.
- `strncmp`: Compares up to `n` characters.

**Example 1:**

```c
if (strcmp("cat", "dog") < 0) {
    // "cat" comes before "dog"
}
```

**Example 2:**

```c
if (strncmp("apple", "apricot", 3) == 0) {
    // First 3 letters are the same
}
```

**Visualization:**

- Useful for sorting, searching, and equality checks.

---

### strlen

**Basic Idea & Usage:**
Returns the length of a string (not counting the null terminator).

**Example 1:**

```c
size_t len = strlen("hello"); // len = 5
```

**Example 2:**

```c
char s[100] = "abc";
printf("%zu", strlen(s));
```

**Visualization:**

- Counts characters up to (but not including) the first `\0`.

---

### strchr / strrchr

**Basic Idea & Usage:**

- `strchr`: Finds the first occurrence of a character in a string.
- `strrchr`: Finds the last occurrence.
Returns a pointer to the character or NULL if not found.

**Example 1:**

```c
char *p = strchr("banana", 'a'); // Points to first 'a'
```

**Example 2:**

```c
char *p = strrchr("banana", 'a'); // Points to last 'a'
```

**Visualization:**

- Useful for parsing and searching within strings.

---

### strstr

**Basic Idea & Usage:**
Finds the first occurrence of a substring in a string. Returns a pointer to the substring or NULL if not found.

**Example 1:**

```c
char *p = strstr("hello world", "world");
```

**Example 2:**

```c
if (strstr("abcdef", "cd")) {
    // Found substring
}
```

**Visualization:**

- Pointer to the start of the found substring, or NULL.

---

### memset

**Basic Idea & Usage:**
Sets a block of memory to a specific value (often used to initialize arrays).

**Example 1:**

```c
int arr[10];
memset(arr, 0, sizeof(arr));
```

**Example 2:**

```c
char buf[100];
memset(buf, 'A', 10); // First 10 bytes set to 'A'
```

**Visualization:**

- Fills memory with a value; useful for initialization and clearing.

---

### memcpy / memmove

**Basic Idea & Usage:**

- `memcpy`: Copies a block of memory from source to destination. Fast, but undefined if regions overlap.
- `memmove`: Like `memcpy`, but safe for overlapping regions.

**Example 1:**

```c
int src[5] = {1,2,3,4,5};
int dest[5];
memcpy(dest, src, sizeof(src));
```

**Example 2:**

```c
char s[] = "abcdef";
memmove(s+2, s, 4); // Overlapping copy
```

**Visualization:**

- Use `memmove` for overlapping memory; both copy bytes from source to destination.

---

## <time.h> — Time and Date Functions

### time

**Basic Idea & Usage:**
Returns the current calendar time as a `time_t` value (seconds since the Unix epoch). Pass `NULL` to get the current time; pass a pointer to store the result.

**Example 1:**

```c
#include <time.h>
time_t now = time(NULL);
```

**Example 2:**

```c
time_t t;
time(&t); // Equivalent to t = time(NULL);
```

**Visualization:**

- Returns seconds since Jan 1, 1970 (UTC).
- Used for timestamps, seeding random, measuring intervals.

---

### ctime

**Basic Idea & Usage:**
Converts a `time_t` value to a human-readable string (includes newline). Not thread-safe.

**Example 1:**

```c
time_t now = time(NULL);
printf("%s", ctime(&now));
```

**Example 2:**

```c
char *s = ctime(&now); // s might be "Sat Jun 22 12:34:56 2025\n"
```

**Visualization:**

- Output: "Day Mon DD HH:MM:SS YYYY\n"
- String is statically allocated; do not modify or free.

---

### asctime

**Basic Idea & Usage:**
Converts a `struct tm *` (broken-down time) to a human-readable string. Not thread-safe.

**Example 1:**

```c
struct tm *tm_info = localtime(&now);
printf("%s", asctime(tm_info));
```

**Example 2:**

```c
struct tm t = {0};
t.tm_year = 125; // 2025
char *s = asctime(&t);
```

**Visualization:**

- Output format: "Day Mon DD HH:MM:SS YYYY\n"
- String is statically allocated; do not modify or free.

---

### localtime

**Basic Idea & Usage:**
Converts a `time_t` value to a `struct tm *` representing local time (broken-down into year, month, etc.). Not thread-safe.

**Example 1:**

```c
time_t now = time(NULL);
struct tm *tm_info = localtime(&now);
printf("%d-%02d-%02d\n", tm_info->tm_year+1900, tm_info->tm_mon+1, tm_info->tm_mday);
```

**Example 2:**

```c
struct tm *tm_info = localtime(&now);
printf("Hour: %d\n", tm_info->tm_hour);
```

**Visualization:**

- `struct tm` fields: year, month, day, hour, min, sec, etc.
- Pointer is to a static object; do not free.

---

### gmtime

**Basic Idea & Usage:**
Converts a `time_t` value to a `struct tm *` representing UTC/GMT time. Not thread-safe.

**Example 1:**

```c
time_t now = time(NULL);
struct tm *tm_utc = gmtime(&now);
printf("UTC: %d-%02d-%02d\n", tm_utc->tm_year+1900, tm_utc->tm_mon+1, tm_utc->tm_mday);
```

**Example 2:**

```c
struct tm *tm_utc = gmtime(&now);
printf("UTC Hour: %d\n", tm_utc->tm_hour);
```

**Visualization:**

- Like `localtime`, but always UTC.
- Pointer is to a static object; do not free.

---

### difftime

**Basic Idea & Usage:**
Returns the difference in seconds between two `time_t` values as a `double`.

**Example 1:**

```c
time_t start = time(NULL);
// ... do something ...
time_t end = time(NULL);
double elapsed = difftime(end, start);
```

**Example 2:**

```c
double seconds = difftime(time2, time1);
```

**Visualization:**

- `difftime(t2, t1)` = seconds from t1 to t2 (can be negative).

---

### clock

**Basic Idea & Usage:**
Returns processor time used by the program (not wall time), as `clock_t`. Divide by `CLOCKS_PER_SEC` for seconds.

**Example 1:**

```c
clock_t start = clock();
// ... code to time ...
clock_t end = clock();
double cpu_time = (double)(end - start) / CLOCKS_PER_SEC;
```

**Example 2:**

```c
if (clock() == (clock_t)-1) {
    // Error
}
```

**Visualization:**

- Measures CPU time, not real elapsed time.
- Useful for benchmarking code.

---

## <ctype.h> — Character Classification and Conversion

### isalpha

**Basic Idea & Usage:**
Checks if a character is an alphabetic letter (A-Z or a-z). Returns nonzero if true, 0 otherwise.

**Example 1:**

```c
if (isalpha('A')) { /* true */ }
```

**Example 2:**

```c
char c = '7';
if (!isalpha(c)) { /* false */ }
```

**Visualization:**

- Returns true for letters, false for digits, punctuation, etc.

---

### isdigit

**Basic Idea & Usage:**
Checks if a character is a decimal digit (0-9). Returns nonzero if true, 0 otherwise.

**Example 1:**

```c
if (isdigit('5')) { /* true */ }
```

**Example 2:**

```c
char c = 'a';
if (!isdigit(c)) { /* false */ }
```

**Visualization:**

- Returns true for '0'-'9', false otherwise.

---

### isalnum

**Basic Idea & Usage:**
Checks if a character is alphanumeric (letter or digit). Returns nonzero if true, 0 otherwise.

**Example 1:**

```c
if (isalnum('B')) { /* true */ }
```

**Example 2:**

```c
if (isalnum('3')) { /* true */ }
```

**Visualization:**

- True for letters and digits, false for punctuation, spaces, etc.

---

### isspace

**Basic Idea & Usage:**
Checks if a character is a whitespace character (space, tab, newline, etc.). Returns nonzero if true, 0 otherwise.

**Example 1:**

```c
if (isspace(' ')) { /* true */ }
```

**Example 2:**

```c
if (isspace('\n')) { /* true */ }
```

**Visualization:**

- True for space, tab, newline, carriage return, form feed, vertical tab.

---

### toupper

**Basic Idea & Usage:**
Converts a lowercase letter to uppercase. If not a lowercase letter, returns the character unchanged.

**Example 1:**

```c
char upper = toupper('b'); // 'B'
```

**Example 2:**

```c
char c = toupper('!'); // '!'
```

**Visualization:**

- Only lowercase letters are changed; others are returned as-is.

---

### tolower

**Basic Idea & Usage:**
Converts an uppercase letter to lowercase. If not an uppercase letter, returns the character unchanged.

**Example 1:**

```c
char lower = tolower('G'); // 'g'
```

**Example 2:**

```c
char c = tolower('7'); // '7'
```

**Visualization:**

- Only uppercase letters are changed; others are returned as-is.

---

## <assert.h> — Diagnostics

### assert

**Basic Idea & Usage:**
Evaluates an expression at runtime. If the expression is false (zero), prints an error message and aborts the program. Used for debugging and catching logic errors.

**Example 1:**

```c
#include <assert.h>
int x = 5;
assert(x > 0); // Passes, program continues
```

**Example 2:**

```c
int y = -1;
assert(y >= 0); // Fails, prints error and aborts
```

**Visualization:**

- If the condition is true: nothing happens, program continues.
- If the condition is false: prints to stderr (file, line, expression), then aborts.
- Often disabled in release builds by defining `NDEBUG` before including `<assert.h>`.

---
