Question 01 – Pawn Rush

Contest Details

- Platform: CodeChef
- Contest: START266D
- Week: Week 01
- Date: 25 November 2026
- Programming Language: C
- Problem: Pawn Rush

Problem Overview

A white pawn is placed on row "R" of an otherwise empty 8 × 8 chessboard.

- The pawn normally moves forward by one row.
- If the pawn starts on row 2, it can make its first move by advancing two rows instead.
- The objective is to find the minimum number of moves required to reach row 8.

Approach

The solution uses conditional statements ("if-else") to determine the minimum number of moves.

1. If "R" is greater than 2, the pawn can only move one row at a time. Therefore, the answer is "8 - R".
2. If "R" is equal to 2, the pawn can use its special two-row first move. The minimum number of moves is 5.

C Concepts Used

- Header files ("stdio.h")
- Integer variables
- "scanf()" and "printf()"
- Conditional statements ("if-else")
- Arithmetic operations

Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1)

The solution uses a constant number of operations and variables.

Solution File

"solution.c"

Learning Outcome

Practised conditional logic, arithmetic operations, and translating a problem statement into a simple C program.
