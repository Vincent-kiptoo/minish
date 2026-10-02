# minish

A small Unix-like shell written in C.

`minish` is a learning-driven systems programming project built to develop a strong foundation in **Structured Programming, C programming, memory management, and operating-system concepts**.

The shell will be developed incrementally, with each feature introduced only after understanding the underlying programming concept.

## Project Goals

The primary goal of `minish` is not to recreate Bash.

The goal is to use a real, progressively complex project to understand how programs are designed and implemented in C.

Through the project, we will practice:

* Structured programming
* Problem decomposition
* Algorithms and control structures
* Functions and modular design
* Variables, types, and memory
* Arrays and strings
* Pointers
* Dynamic memory management
* File handling
* Process creation and execution
* Command parsing
* Error handling
* Debugging and testing
* Basic Unix/Linux system concepts

## Why a Shell?

A shell provides a practical environment for applying fundamental programming concepts.

At a high level, a shell repeatedly performs:

```text
Read → Parse → Execute → Repeat
```

This naturally introduces the three fundamental structured-programming control structures:

```text
Sequence
Selection
Iteration
```

As the project develops, these simple ideas will be combined into increasingly sophisticated program structures.

## Planned Features

Development will be incremental.

### Phase 1 — Interactive Shell Loop

* Display a prompt
* Read user input
* Recognize the `exit` command
* Continue accepting commands until `exit`
* Handle basic input safely

### Phase 2 — Command Parsing

* Tokenize command input
* Separate commands from arguments
* Handle whitespace
* Validate input

### Phase 3 — Built-in Commands

Planned built-ins include:

* `exit`
* `cd`
* `help`

### Phase 4 — External Commands

* Locate executable programs
* Create processes
* Execute external programs
* Wait for child processes
* Handle execution errors

### Phase 5 — Robustness

* Input validation
* Error handling
* Memory-safety improvements
* Edge-case testing
* Better command parsing

### Phase 6 — Shell Features

Potential future features may include:

* Environment variables
* Command history
* Input/output redirection
* Pipes
* Background processes

Features will only be added when they serve the learning objectives of the project.

## Architecture

The project will gradually be organized around clear responsibilities.

Conceptually:

```text
main()
  │
  ├── read_command()
  │
  ├── parse_command()
  │
  └── execute_command()
```

The architecture will evolve as the complexity of the shell increases.

The project will avoid unnecessary abstraction early on. Structure will be introduced when the problem requires it.

## Development Approach

The project follows a **learn → design → implement → test → review** cycle.

Before implementing a feature:

1. Understand the problem.
2. Define the expected behavior.
3. Design the algorithm.
4. Identify the required data structures and control flow.
5. Implement the solution.
6. Test normal and edge cases.
7. Review the code for correctness, clarity, and safety.

The implementation is intentionally built incrementally rather than copied from an existing shell.

## Technology

* **Language:** C
* **Platform:** Linux / Unix-like systems
* **Compiler:** GCC
* **Version control:** Git
* **Repository hosting:** GitHub

## Project Structure

The project currently follows a simple structure:

```text
minish/
├── README.md
├── .gitignore
├── src/
│   └── main.c
├── tests/
└── docs/
```

The structure will evolve as the project grows.

## Current Status

**Phase 1 — Project Setup**

Current focus:

* Repository initialization
* C project structure
* Understanding shell architecture
* Designing the interactive shell loop

### First milestone

The first working version should behave approximately like:

```text
minish$ hello
You entered: hello

minish$ test
You entered: test

minish$ exit
$
```

At this stage, the shell will **not** execute external programs yet.

The focus is understanding the fundamental interactive loop before introducing processes and system calls.

## Learning Objectives

By the end of the project, the goal is to be able to explain and implement:

```text
Problem
   ↓
Algorithm
   ↓
Control Flow
   ↓
Data Structures
   ↓
Functions
   ↓
C Implementation
   ↓
Testing
```

More importantly, the project is intended to build the ability to reason about **why the program works**, not simply reproduce syntax.

## Disclaimer

`minish` is an educational project.

It is not intended to be a production replacement for shells such as Bash, Zsh, or Fish.

## License

This project is currently intended for educational and portfolio purposes.
