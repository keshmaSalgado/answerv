Dynamic Matrix Operations in C++
A C++ program that demonstrates dynamic memory allocation, pointer manipulation, and matrix operations using a 2D array allocated on the heap.

Description
This program creates a dynamically allocated 2D integer matrix, fills it with random values, and performs operations such as finding the row with the maximum sum and swapping rows using pointer references.

Features

Dynamic matrix creation using double pointers (int**)
Random number generation to fill the matrix (values 0–99)
Memory address display alongside each matrix value
Row sum analysis to find the row with the maximum total
Row swapping using pointer references — no element-by-element copying


File Structure
answerv/
└── question.cpp       # Main source file

The source file is also available:

In the Cardiff Moodle zip folder submitted with the report
In the ICBT SYS folder as question.cpp


How to Compile & Run
Requirements

A C++ compiler (e.g., g++, MSVC, or Clang)
C++11 or later

Compile (Linux / macOS / Windows with MinGW)
bashg++ -o matrix question.cpp
Run
bash./matrix
Example Interaction
Enter number of rows: 3
Enter number of columns: 3

Original Matrix:
42 (0x...) 17 (0x...) 83 (0x...)
91 (0x...) 5  (0x...) 36 (0x...)
22 (0x...) 68 (0x...) 14 (0x...)

Row with maximum sum: Row 2

Matrix after swapping first row with max row:
91 (0x...) 5  (0x...) 36 (0x...)
42 (0x...) 17 (0x...) 83 (0x...)
22 (0x...) 68 (0x...) 14 (0x...)

Key Concepts Demonstrated
ConceptDetailsDynamic allocationnew int*[rows] / new int[cols]Pointer-to-pointerint** for 2D matrixPass by referenceint* &row1 in swapRows()Memory addresses&matrix[i][j] printed via coutRandom numbersrand() % 100 seeded with srand(time(0))

Functions Overview

createMatrix(rows, cols) — Allocates a 2D matrix on the heap and returns a pointer to it
fillMatrix(...) — Fills all cells with random integers between 0 and 99
displayMatrix(...) — Prints each value along with its memory address
findMaxRow(...) — Returns the index of the row whose elements sum to the highest total
swapRows(row1, row2) — Swaps two rows by exchanging their pointers (O(1) operation)


Author
Keshma Salgado
GitHub: github.com/keshmaSalgado/answerv

License
This project is for academic purposes.