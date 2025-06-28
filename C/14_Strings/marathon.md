# C String Exercises

These exercises focus on sharpening your skills with C string functions (`strcmp`, `strlen`, `strcpy`, `strchr`, `strcat`) from `<string.h>`. Ensure `<stdio.h>` is included for I/O. Use safe input methods (e.g., `fgets`) and sufficient array sizes to avoid buffer overflows.

## 1. String Length Counter (Beginner)

**Task**: Write a program that takes a string input (max 100 characters) and prints its length using `strlen`.

**Example**:

```c
Input: hello
Output: Length = 5
```

**Hint**: Use `fgets` to read input and remove the trailing newline before calling `strlen`.

**Visualization**:

```c
Input: "hello\n\0" → After removing '\n': "hello\0" → strlen returns 5
```

## 2. String Comparison Game (Beginner)

**Task**: Write a program that takes two strings (max 50 characters each) and uses `strcmp` to determine their lexicographical order. Print:

- "String 1 comes first" if the first string is smaller.
- "String 2 comes first" if the second string is smaller.
- "Strings are equal" if they are the same.

**Example**:

```c
Input: apple banana
Output: String 1 comes first
```

**Hint**: `strcmp(s1, s2)` returns `< 0`, `0`, or `> 0`.

**Visualization**:

```c
apple vs banana:
'a' (97) vs 'b' (98) → strcmp returns -1
```

## 3. String Copy Challenge (Beginner-Intermediate)

**Task**: Write a program that takes a string input (max 50 characters) and copies it to another string using `strcpy`. Print both strings to confirm they match.

**Example**:

```c
Input: world
Output: Original: world, Copied: world
```

**Hint**: Use a destination array like `char dest[51]` and `strcpy(dest, src)`.

**Visualization**:

```c
src:  "world\0"
dest: [ ][ ][ ][ ][ ][ ] → After strcpy: "world\0"
```

**Challenge**: Discuss what happens if `dest` is too small.

## 4. Character Hunt (Intermediate)

**Task**: Write a program that takes a string (max 100 characters) and a character. Use `strchr` to find the first occurrence of the character. Print:

- The 0-based position if found.
- "Not found" otherwise.

**Example**:

```c
Input: hello l
Output: Found at position 2
```

**Hint**: Index = `strchr(string, c) - string`. Check for `NULL`.

**Visualization**:

```c
string: "hello\0"
         01234
Looking for 'l': strchr returns pointer to position 2
```

## 5. String Concatenation Puzzle (Intermediate)

**Task**: Write a program that takes two strings (max 50 characters each) and concatenates them using `strcat`. Print the result. Ensure `dest` is large enough.

**Example**:

```c
Input: hello world
Output: Concatenated: helloworld
```

**Hint**: Use a `dest` array of size 101 and `strcat(dest, src)`.

**Visualization**:

```c
dest: "hello\0     "
src:  "world\0"
After strcat: "helloworld\0"
```

**Challenge**: Limit concatenation to the first `n` characters of `src`.

## 6. Vowel Counter (Intermediate-Advanced)

**Task**: Write a program that takes a string (max 100 characters) and counts vowels (`a`, `e`, `i`, `o`, `u`, case-insensitive) using `strchr`. Print the count.

**Example**:

```c
Input: Hello World
Output: Vowel count = 3
```

**Hint**: Convert to lowercase with `tolower` (`<ctype.h>`), check each character in "aeiou".

**Visualization**:

```c
string: "hello\0"
Check in "aeiou\0":
'h' → not found
'e' → found
'l' → not found
'l' → not found
'o' → found
Total: 2 vowels
```

## 7. String Reversal (Advanced)

**Task**: Write a program that takes a string (max 100 characters) and reverses it using only `strlen`. Print the reversed string.

**Example**:

```c
Input: hello
Output: Reversed: olleh
```

**Hint**: Swap characters from start and end until pointers meet.

**Visualization**:

```c
string: "hello\0"
         h e l l o
Swap:    o e l l h
Swap:    o l l e h
Result: "olleh\0"
```

## 8. Substring Search (Advanced)

**Task**: Write a program that takes a main string (max 100 characters) and a substring (max 50 characters). Use `strchr` to check if the substring exists. Print "Found" or "Not found".

**Example**:

```c
Input: hello world lo
Output: Found
```

**Hint**: Use `strchr` to find the first character of the substring, then check subsequent characters.

**Visualization**:

```c
main: "hello world\0"
sub:  "lo\0"
strchr finds 'l' at 2, check 'o' at 3 → match
```

## 9. String Transformation (Advanced)

**Task**: Write a program that takes a string (max 100 characters), converts it to uppercase (`toupper` from `<ctype.h>`), and appends its reverse using `strcat`. Print the result.

**Example**:

```c
Input: hello
Output: HELLOOLLEH
```

**Hint**: Copy the string, reverse it, then append to the uppercase original.

**Visualization**:

```c
Input: "hello\0"
Uppercase: "HELLO\0"
Reverse: "olleh\0"
Concat: "HELLOOLLEH\0"
```

## 10. Custom String Function (Expert)

**Task**: Implement `my_strcmp` without `<string.h>`. Compare two strings lexicographically, returning `< 0`, `0`, or `> 0`. Test against `strcmp`.

**Example**:

```c
Input: cat dog
Output: my_strcmp: -1, strcmp: -1
```

**Hint**: Compare characters until a difference or `\0` is found.

**Visualization**:

```c
s1: "cat\0"
s2: "dog\0"
'c' (99) vs 'd' (100) → 99 - 100 = -1
```

## Tips

- Test edge cases: empty strings, spaces, case sensitivity.
- Use `fgets` for safe input.
- Check array bounds to avoid undefined behavior.
