# C++ Personal Information and Debugging Exercises

A collection of introductory C++ programming exercises developed for the **Programming III (CSC450)** course at Colorado State University Global.

This project demonstrates fundamental C++ syntax, console output, variable declarations, debugging, and correcting common programming errors.

The repository contains three independent C++ programs completed as part of the Module 1 Critical Thinking assignment.

## Project Overview

The assignment consists of two primary components:

1. Develop a C++ program that displays information about a fictional person.
2. Identify and correct errors in two provided C++ programs.

These exercises reinforce introductory C++ concepts while providing practical experience with program compilation, debugging, and execution.

Each source file contains its own `main()` function and is intended to be compiled and executed independently.

## Technologies Used

- **C++** — Programming language
- **C++ Standard Library** — Console output and string handling
- **Eclipse IDE for C/C++ Developers** — Original development environment
- **MinGW-w64 / g++** — C++ compiler
- **Git and GitHub** — Version control and project documentation

## Project Structure

```text
cpp-personal-information-and-debugging/
├── CSC450_CT1_Person.cpp
├── CSC450_CT1_mod1-1.cpp
├── CSC450_CT1_mod1-2.cpp
├── .gitignore
├── LICENSE
└── README.md
```

## Program 1 — Personal Information

**File:** `CSC450_CT1_Person.cpp`

The first program creates a fictional person's profile using C++ variables and displays the information in the console.

The program stores:

- First name
- Last name
- Street address
- City
- ZIP code

### Concepts Demonstrated

- Declaring and initializing variables
- Using `string` and `int` data types
- Including standard library headers
- Displaying formatted output with `cout`
- Using `endl` for line breaks
- Structuring a program with `main()`
- Writing pseudocode before implementation

### Example Code

```cpp
string firstName = "Kai";
string lastName = "Veyr";
string streetAddress = "1247 Veyr Manor";
string city = "Zaryndor";
int zipCode = 80521;
```

### Expected Output

```text
First Name: Kai
Last Name: Veyr
Street Address: 1247 Veyr Manor
City: Zaryndor
Zip Code: 80521
```

The program uses fictional information rather than personal identifying details.

### Pseudocode

The original source file includes pseudocode describing the program's intended behavior.

The pseudocode outlines the following sequence:

1. Declare variables for the person's information.
2. Assign values to each variable.
3. Display the stored information.
4. End the program successfully.

This demonstrates planning the program's logic before writing the C++ implementation.

## Program 2 — Debugging Exercise 1

**File:** `CSC450_CT1_mod1-1.cpp`

The second program is an instructor-provided debugging exercise.

The objective was to identify and correct errors in the original source code so the program could compile and execute successfully.

### Concepts Demonstrated

- Recognizing common C++ syntax errors
- Correcting console output statements
- Using the `iostream` library
- Understanding namespace declarations
- Working with the `main()` function
- Debugging and verifying program output

### Expected Output

```text
Welcome to this C++ Program
I have corrected all errors for this program.
```

This exercise provided practice reading existing source code, identifying problems, and applying corrections.

## Program 3 — Debugging Exercise 2

**File:** `CSC450_CT1_mod1-2.cpp`

The third program is another instructor-provided debugging exercise.

In addition to correcting syntax errors, this program demonstrates declaring a floating-point variable and displaying its value.

### Concepts Demonstrated

- Declaring and initializing a `double`
- Correcting syntax and output statements
- Using variables in console output
- Working with standard output streams
- Debugging existing C++ programs

### Example Code

```cpp
double myMoney = 1000.50;
```

### Expected Output

```text
Please be sure to correct all syntax errors in this program
I have corrected all errors for this program.
The total amount of money available is = 1000.5
```

The value is displayed using the default formatting behavior of `cout`.

## How to Compile and Run

### Requirements

- A C++ compiler, such as g++ through MinGW-w64
- A terminal or command prompt
- Windows, Linux, or macOS with a compatible C++ development environment

**Note:** The two instructor-provided debugging files originally include the nonstandard header `conio.h`, which may not be available on all compilers. Because neither program uses functions from that header, it can be removed when compiling with a toolchain that does not support it.

### Compile Program 1

From the repository's root directory:

```bash
g++ CSC450_CT1_Person.cpp -o person
```

Run on Windows:

```powershell
.\person.exe
```

Run on Linux or macOS:

```bash
./person
```

### Compile Program 2

```bash
g++ CSC450_CT1_mod1-1.cpp -o debugging1
```

Run on Windows:

```powershell
.\debugging1.exe
```

Run on Linux or macOS:

```bash
./debugging1
```

### Compile Program 3

```bash
g++ CSC450_CT1_mod1-2.cpp -o debugging2
```

Run on Windows:

```powershell
.\debugging2.exe
```

Run on Linux or macOS:

```bash
./debugging2
```

### Important Compilation Note

All three source files contain a separate `main()` function.

They are intentionally maintained in one repository for organizational purposes, but they are **not intended to be linked into a single executable**.

Compiling all three files together would result in multiple definitions of `main()`.

During the original development process in Eclipse, individual source files were excluded from the build as needed so each exercise could be compiled and tested independently.

This approach preserved the three assignment components within one project while allowing them to be executed separately.

## Development and Debugging Process

The original coursework involved:

1. Setting up a C++ development environment in Eclipse.
2. Configuring the MinGW-w64 compiler.
3. Creating and testing the personal information application.
4. Identifying errors in the two instructor-provided programs.
5. Correcting syntax and output statements.
6. Compiling and executing each program independently.
7. Verifying the expected console output.
8. Maintaining the source files together for assignment organization.

The personal information program was developed using pseudocode to outline its variables and output requirements.

The debugging exercises emphasized understanding existing code and making targeted corrections rather than rewriting the programs.

## Key Programming Concepts

### Variables and Data Types

The exercises use fundamental C++ data types, including:

- `string` for textual information
- `int` for whole numbers
- `double` for floating-point values

### Console Output

The programs use `cout` to display information in the terminal.

```cpp
cout << "First Name: " << firstName << endl;
```

The insertion operator (`<<`) sends text and variable values to the output stream.

### Debugging

The exercises demonstrate how small syntax errors can prevent successful compilation.

Correcting these errors requires reviewing the source code, understanding compiler feedback, and verifying the program's output.

### Program Structure

Each program contains a `main()` function that serves as its entry point.

The programs also demonstrate the use of header files, namespace declarations, statements, and return values.

## Testing and Verification

The original assignment included compilation and execution testing for all three programs.

| Test | Expected Result |
|------|-----------------|
| Compile personal information program | Compiles without errors |
| Run personal information program | Displays all five fields |
| Compile debugging exercise 1 | Compiles with a compatible toolchain |
| Run debugging exercise 1 | Displays both expected messages |
| Compile debugging exercise 2 | Compiles with a compatible toolchain |
| Run debugging exercise 2 | Displays corrected messages and monetary value |
| Compile programs independently | Avoids multiple `main()` linker errors |

The original development process also included screenshots documenting the code and successful execution.

## Educational Context

This repository represents the first Critical Thinking assignment in **CSC450 — Programming III** at Colorado State University Global.

The assignment provided practice with:

- C++ syntax and program structure
- Declaring and initializing variables
- Working with multiple data types
- Displaying formatted console output
- Using pseudocode for program planning
- Debugging instructor-provided source code
- Understanding compilation errors
- Working with multiple independent programs
- Configuring and using a C++ development environment

The original coursework structure has been preserved to demonstrate foundational C++ programming skills and progression into more advanced Programming III assignments.

## Limitations

These programs are introductory exercises rather than full applications.

- All values in the personal information program are hardcoded.
- The programs do not accept interactive user input.
- No external files or databases are used.
- Each program must be compiled independently.
- The debugging exercises retain the structure of the instructor-provided examples.
- The nonstandard `conio.h` header in the debugging exercises may require removal for compiler portability.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
