# C Programming Collection
 
A collection of 87 C programs written while learning the language from scratch.  
Covers everything from basic conditionals to dynamic memory allocation — built and compiled on Linux.
 
> Compiled binaries are included in ELF (Executable and Linkable Format), native to Linux.
 
---
 
## Topics Covered
 
| # | Topic | What's inside |
|---|-------|---------------|
| 1 | **Basics** | Conditionals, operators, calculators, grade systems |
| 2 | **Math** | SI, sphere volume, Fibonacci, AP/GP series, digit operations |
| 3 | **Loops** | `for`, `while`, `do-while` — counters, tables, sequences |
| 4 | **Pattern Printing** | Stars, triangles, diamonds, hollow boxes, number patterns |
| 5 | **Functions** | Modular programs, return values, parameter passing |
| 6 | **Recursion** | Factorial, countdown, staircase problem, "Good Morning" printer |
| 7 | **Arrays** | Sorting, searching, duplicates, sum/product, 2D arrays |
| 8 | **Pointers** | Address exploration, pointer arithmetic, `malloc`, `realloc` |
| 9 | **Structures** | Student record with `struct` — name, age, percentage |
 
---
 
## Environment
 
- **OS:** Linux
- **Compiler:** GCC
- **Binary format:** ELF (Executable and Linkable Format)
---
 
## Repository Structure
 
```
C-Programming-Collection/
├── basics/
├── math/
├── loops/
├── patterns/
├── functions/
├── recursion/
├── arrays/
├── pointers/
└── structs/
```
 
Each folder contains `.c` source files and their compiled ELF binaries.
 
---
 
## Running the Programs
 
**Compile from source:**
```bash
gcc filename.c -o output
./output
```
 
**Run a precompiled binary directly:**
```bash
./program_name
```
 
Some programs under `math/` use `<math.h>` and need the `-lm` flag:
```bash
gcc filename.c -o output -lm
```
