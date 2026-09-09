# C Programming 

C is a general-purpose, procedural programming language. It is widely used for system programming, embedded systems, operating systems, and application development.

---

## 1. What is C?

C is a **procedural programming language** that allows us to write instructions for a computer.

### Simple Interview Definition

> C is a general-purpose procedural programming language that provides low-level memory access and is widely used for system and application development.

---

# C Programming

## 2. Basic Structure of a C Program

```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}
```

### Explanation

### `#include <stdio.h>`

This includes the **Standard Input Output library**.

It provides functions such as:

- `printf()`
- `scanf()`

---

### `int main()`

`main()` is the **starting point of a C program**.

The program execution starts from the `main()` function.

`int` means the function returns an integer value.

---

### `printf()`

Used to **display output**.

```c
printf("Hello");
```

---

### `return 0`

It indicates that the program executed successfully.

---

# 3. Comments in C

Comments are ignored by the compiler.

They are used to explain the code.

### Single-line Comment

```c
// This is a comment
```

### Multi-line Comment

```c
/*
   This is
   a multi-line comment
*/
```

---

# 4. Variables

A variable is a **named memory location used to store data**.

### Example

```c
int age = 20;
```

Here:

- `int` → Data type
- `age` → Variable
- `20` → Value

Think of a variable as a **box that stores a value**.

---

# 5. Data Types

A data type tells C **what type of value a variable can store**.

## Main Data Types

| Data Type | Used For | Example |
|---|---|---|
| `int` | Integer numbers | `10` |
| `float` | Decimal numbers | `10.5` |
| `double` | Larger decimal values | `10.56789` |
| `char` | Single character | `'A'` |

### Example

```c
int age = 20;
float salary = 25000.50;
double pi = 3.141592;
char grade = 'A';
```

---

# 6. Constants

A constant is a value that **cannot be changed during program execution**.

### Example

```c
const int x = 10;
```

We cannot do:

```c
x = 20;
```

because `x` is constant.

---

# 7. Operators

Operators are symbols used to perform operations.

## Arithmetic Operators

| Operator | Meaning |
|---|---|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Modulus |

### Example

```c
int a = 10;
int b = 3;

printf("%d", a + b);
```

### Output

```text
13
```

### Modulus `%`

It gives the **remainder**.

```text
10 % 3
```

Answer:

```text
1
```

---

# 8. Relational Operators

Relational operators are used to **compare values**.

| Operator | Meaning |
|---|---|
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal |
| `<=` | Less than or equal |
| `==` | Equal to |
| `!=` | Not equal to |

### Example

```c
int a = 10;
int b = 20;

printf("%d", a < b);
```

### Output

```text
1
```

In C:

- `1` → True
- `0` → False

---

# 9. Logical Operators

Logical operators are used to combine conditions.

### AND `&&`

Both conditions must be true.

```c
age >= 18 && age <= 60
```

### OR `||`

At least one condition must be true.

```c
age < 18 || age > 60
```

### NOT `!`

Reverses the condition.

```c
!(age >= 18)
```

---

# 10. Assignment Operator

The assignment operator is:

```c
=
```

### Example

```c
int x = 10;
```

It means:

> Store 10 inside x.

### Important

`=` and `==` are different.

### Assignment

```c
x = 10;
```

Means:

> Assign 10 to x.

### Comparison

```c
x == 10;
```

Means:

> Check whether x is equal to 10.

---

# 11. Conditional Statements

Conditional statements are used when we want the program to **make decisions**.

## `if`

```c
if (condition) {
    // code
}
```

### Example

```c
int age = 20;

if (age >= 18) {
    printf("Eligible");
}
```

---

## `if-else`

```c
if (condition) {
    // true
}
else {
    // false
}
```

### Example

```c
int age = 16;

if (age >= 18) {
    printf("Eligible");
}
else {
    printf("Not Eligible");
}
```

---

## `else-if`

Used when there are multiple conditions.

```c
if (marks >= 90) {
    printf("A");
}
else if (marks >= 75) {
    printf("B");
}
else if (marks >= 50) {
    printf("C");
}
else {
    printf("Fail");
}
```

---

# 12. Switch Statement

`switch` is used when we need to compare one value against multiple fixed cases.

### Example

```c
int day = 2;

switch(day) {

    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    default:
        printf("Invalid");
}
```

### Output

```text
Tuesday
```

### Why `break`?

`break` stops the execution of the `switch`.

Without `break`, execution can continue into the following cases. This is called **fall-through**.

---

# 13. Loops

Loops are used when we want to **repeat a block of code**.

C has three main loops:

1. `for`
2. `while`
3. `do-while`

---

# 14. for Loop

Used when we generally know how many times we want to repeat something.

### Syntax

```c
for(initialization; condition; update) {
    // code
}
```

### Example

```c
for(int i = 0; i < 5; i++) {
    printf("%d ", i);
}
```

### Output

```text
0 1 2 3 4
```

### How It Works

```text
i = 0
   ↓
Check i < 5
   ↓
Execute code
   ↓
i++
   ↓
Check condition again
```

---

# 15. while Loop

Used when the number of repetitions depends on a condition.

### Syntax

```c
while(condition) {
    // code
}
```

### Example

```c
int i = 0;

while(i < 5) {
    printf("%d ", i);
    i++;
}
```

### Output

```text
0 1 2 3 4
```

---

# 16. do-while Loop

A `do-while` loop executes the code **at least once** because the condition is checked after the loop body.

### Syntax

```c
do {
    // code
} while(condition);
```

### Example

```c
int i = 0;

do {
    printf("%d ", i);
    i++;
} while(i < 5);
```

### Output

```text
0 1 2 3 4
```

---

# 17. break

`break` is used to **immediately stop a loop or switch**.

### Example

```c
for(int i = 0; i < 10; i++) {

    if(i == 5) {
        break;
    }

    printf("%d ", i);
}
```

### Output

```text
0 1 2 3 4
```

---

# 18. continue

`continue` skips the current iteration and moves to the next iteration.

### Example

```c
for(int i = 0; i < 5; i++) {

    if(i == 2) {
        continue;
    }

    printf("%d ", i);
}
```

### Output

```text
0 1 3 4
```

---

# 19. Arrays

An array is a collection of **elements of the same data type stored in continuous memory locations**.

### Example

```c
int arr[5] = {10, 20, 30, 40, 50};
```

Array indexes start from `0`.

```text
arr[0] → 10
arr[1] → 20
arr[2] → 30
arr[3] → 40
arr[4] → 50
```

---

# 20. Traversing an Array

To visit every element of an array, we can use a loop.

### Example

```c
int arr[5] = {10, 20, 30, 40, 50};

for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
```

### Output

```text
10 20 30 40 50
```

---

# 21. Finding Array Length

If the array is created in the same scope:

```c
int arr[] = {10, 20, 30, 40, 50};

int n = sizeof(arr) / sizeof(arr[0]);
```

Here:

```c
sizeof(arr)
```

gives the **total size of the array in bytes**.

```c
sizeof(arr[0])
```

gives the **size of one element in bytes**.

Therefore:

```text
Number of elements =
Total array size / Size of one element
```

### Example

```c
#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Length = %d", n);

    return 0;
}
```

### Output

```text
Length = 5
```

> **Important:** This method works when `arr` is actually an array in that scope. When an array is passed to a function as a parameter, it is treated differently and `sizeof` cannot be used there to determine the original array length.

---

# 22. Strings

C does not have a separate built-in `string` data type.

A string is stored as an **array of characters ending with a null character `\0`**.

### Example

```c
char name[] = "Dharun";
```

Internally:

```text
D h a r u n \0
```

The `\0` indicates the **end of the string**.

---

# 23. String Input

A string without spaces can be read using `scanf()`.

### Example

```c
char name[50];

scanf("%49s", name);
```

For strings containing spaces, `fgets()` is generally preferred.

### Example

```c
char name[50];

fgets(name, sizeof(name), stdin);
```

---

# 24. String Length

The standard library provides the `strlen()` function to find the length of a string.

The function is available in:

```c
#include <string.h>
```

### Example

```c
#include <stdio.h>
#include <string.h>

int main() {

    char name[] = "Dharun";

    printf("%zu", strlen(name));

    return 0;
}
```

### Output

```text
6
```

---

# 25. Important String Functions

The `<string.h>` library provides several useful string functions.

| Function | Purpose |
|---|---|
| `strlen()` | Finds string length |
| `strcpy()` | Copies a string |
| `strcat()` | Joins two strings |
| `strcmp()` | Compares two strings |

### Example

```c
#include <stdio.h>
#include <string.h>

int main() {

    char a[] = "Hello";
    char b[] = "World";

    printf("Length = %zu\n", strlen(a));

    return 0;
}
```

---

# 26. Functions

A function is a **block of code designed to perform a specific task**.

### Example

```c
int add(int a, int b) {
    return a + b;
}
```

Calling the function:

```c
int result = add(10, 20);
```

Result:

```text
30
```

### Why Use Functions?

- Code reusability
- Reduces code repetition
- Makes programs easier to understand
- Makes debugging easier

---

# 27. Function Components

Example:

```c
int add(int a, int b) {
    return a + b;
}
```

| Part | Meaning |
|---|---|
| `int` | Return type |
| `add` | Function name |
| `int a, int b` | Parameters |
| `return a + b` | Returned value |

---

# 28. Pointers

A pointer is a variable that **stores the memory address of another variable**.

### Example

```c
int x = 10;

int *p = &x;
```

Here:

```text
x → stores 10
p → stores the address of x
```

### `&` Operator

The `&` operator gives the address of a variable.

```c
&p
```

### `*` Operator

The `*` operator can be used to access the value stored at an address.

```c
printf("%d", *p);
```

Output:

```text
10
```

---

# 29. Structures

A structure allows us to group **different types of data under one name**.

### Example

```c
struct Student {
    int age;
    char grade;
    float marks;
};
```

Creating a structure variable:

```c
struct Student s1;
```

Assigning values:

```c
s1.age = 20;
s1.grade = 'A';
s1.marks = 85.5;
```

---

# 30. Dynamic Memory Allocation

Dynamic memory allocation means allocating memory **during program execution**.

Important functions:

```text
malloc()
calloc()
realloc()
free()
```

These functions are available through:

```c
#include <stdlib.h>
```

### `malloc()`

Allocates a block of memory.

### `calloc()`

Allocates memory and initializes the allocated bytes to zero.

### `realloc()`

Changes the size of previously allocated memory.

### `free()`

Releases dynamically allocated memory.

---

# 31. Type Casting

Type casting means **converting one data type into another**.

### Example

```c
int a = 10;
int b = 3;

float result = (float)a / b;
```

Without casting:

```text
10 / 3 = 3
```

With casting:

```text
10.0 / 3 = 3.333333
```

---

# 32. Header Files

Header files contain declarations for functions and other features.

Common header files:

| Header File | Common Use |
|---|---|
| `stdio.h` | Input and output |
| `stdlib.h` | Memory allocation and utility functions |
| `string.h` | String functions |
| `math.h` | Mathematical functions |

Examples:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
```

---

# 33. Preprocessor Directives

Preprocessor directives are processed before the actual compilation.

They usually start with `#`.

### Example

```c
#include <stdio.h>
```

Another example:

```c
#define PI 3.14
```

Common preprocessor directives:

```text
#include
#define
#ifdef
#ifndef
#endif
```

---

# 34. Compilation Process

A C program generally goes through these stages:

```text
Source Code
     ↓
Preprocessing
     ↓
Compilation
     ↓
Assembly
     ↓
Linking
     ↓
Executable Program
```

For example:

```text
program.c
    ↓
Compiler
    ↓
Executable Program
```

---

# 35. Declaration vs Initialization

## Declaration

Creating a variable without giving it an initial value.

```c
int age;
```

## Initialization

Giving a variable its initial value.

```c
int age = 20;
```

---

# 36. Local Variable

A variable declared inside a function or block is called a **local variable**.

### Example

```c
int main() {

    int x = 10;

    printf("%d", x);

    return 0;
}
```

Here, `x` is a local variable.

---

# 37. Global Variable

A variable declared outside all functions is called a **global variable**.

### Example

```c
int x = 10;

int main() {

    printf("%d", x);

    return 0;
}
```

Here, `x` is a global variable.

---

# 38. Pre-Increment and Post-Increment

This is an important interview concept.

## Post-Increment

```c
int a = 5;

int b = a++;
```

First:

```text
b = 5
```

Then:

```text
a = 6
```

So:

```text
a = 6
b = 5
```

---

## Pre-Increment

```c
int a = 5;

int b = ++a;
```

First:

```text
a = 6
```

Then:

```text
b = 6
```

So:

```text
a = 6
b = 6
```

### Easy Trick

```text
a++  → Use first, increase later

++a  → Increase first, use later
```

---

# 39. sizeof Operator

`sizeof` is used to find the size of a type or object in bytes.

### Example

```c
printf("%zu", sizeof(int));
```

The size of a type can depend on the compiler and platform.

---

# 40. Call by Value

In C, function arguments are passed **by value**.

That means the function receives a copy of the value.

### Example

```c
void change(int x) {
    x = 20;
}

int main() {

    int a = 10;

    change(a);

    printf("%d", a);

    return 0;
}
```

### Output

```text
10
```

The original `a` is not changed.

---

# 41. Passing Address Using Pointer

We can pass the address of a variable to a function using a pointer.

### Example

```c
void change(int *x) {
    *x = 20;
}

int main() {

    int a = 10;

    change(&a);

    printf("%d", a);

    return 0;
}
```

### Output

```text
20
```

The function modifies the original variable through its address.

---

# 42. Recursion

Recursion means a function **calls itself**.

### Example

```c
int factorial(int n) {

    if(n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}
```

For:

```text
factorial(5)
```

The calculation is:

```text
5 × factorial(4)
        ↓
4 × factorial(3)
        ↓
3 × factorial(2)
        ↓
2 × factorial(1)
        ↓
1 × factorial(0)
        ↓
1
```

Therefore:

```text
5 × 4 × 3 × 2 × 1 = 120
```

---
