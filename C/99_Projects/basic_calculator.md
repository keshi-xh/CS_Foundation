# Basic Calculator Project (C)

## Project Overview

Build a simple calculator program in C that:

- Accepts two numbers from the user.
- Accepts an operator (+, -, *, /) from the user.
- Performs the chosen operation and displays the result.
- Handles invalid input and division by zero gracefully.

## Requirements

- The program should prompt the user for two numbers and an operator.
- It should validate the operator and the numbers.
- The program must handle errors, such as invalid operators or division by zero, and display appropriate messages.

## Suggested Steps

1. **Prompt for Input:**
   - Ask the user to enter the first number.
   - Ask for the operator (e.g., +, -, *, /).
   - Ask for the second number.
2. **Input Validation:**
   - Check if the entered operator is valid.
   - Ensure the numbers are valid (consider using input functions that can detect invalid input).
   - If the operator is division, check if the second number is zero.
3. **Perform Calculation:**
   - Use a control structure (such as `switch` or `if-else`) to select the operation based on the operator.
   - Store and display the result.
4. **Error Handling:**
   - If the operator is invalid, print an error message and exit or prompt again.
   - If division by zero is attempted, print an error message.
   - If the input is not a number, handle the error gracefully.

## Hints

- Use functions to organize your code, such as:
  - A function to read and validate numbers from the user.
  - A function to read and validate the operator.
  - A function to perform the calculation.
- Consider using `scanf` for input, but be aware of its limitations with invalid input.
- Use loops or conditionals to re-prompt the user in case of errors.
- Use clear and descriptive error messages.

## Functions You Might Need

- `get_number()` – Reads and validates a number from the user.
- `get_operator()` – Reads and validates the operator.
- `calculate(num1, num2, operator)` – Performs the calculation and returns the result.
- `main()` – Orchestrates the flow of the program.

## Error Handling Considerations

- Invalid operator (not +, -, *, /)
- Division by zero
- Non-numeric input

---

**Note:** Do not include the actual code in this file. Use the hints and structure above to guide your implementation.
