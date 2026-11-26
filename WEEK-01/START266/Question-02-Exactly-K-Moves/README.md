Question 02 – Exactly K Moves

Contest Details

- Platform: CodeChef
- Contest: START266D
- Week: Week 01
- Date: 25 November 2026
- Programming Language: C
- Problem: Exactly K Moves

Problem Overview

Chef is climbing a staircase containing N steps.

In one move, Chef can climb either:

- 1 step
- 2 steps

Chef must reach exactly step N in exactly K moves without going beyond the top.

The task is to determine whether reaching the top in exactly K moves is possible.

Approach

The solution uses conditional statements to check the minimum and maximum distance Chef can cover in K moves.

- Minimum distance: K × 1 = K steps.
- Maximum distance: K × 2 = 2K steps.

Therefore, reaching step N is possible if:

"K <= N && N <= 2 * K"

If both conditions are satisfied, print "YES"; otherwise, print "NO".

C Concepts Used

- Header files ("stdio.h")
- Integer variables
- "scanf()" and "printf()"
- "while" loop
- Conditional statements ("if-else")
- Arithmetic and relational operators
- Logical AND ("&&")

Complexity Analysis

- Time Complexity: O(T), where T is the number of test cases.
- Auxiliary Space Complexity: O(1).

Each test case requires only a constant number of operations.

Solution File

"solution.c"

Learning Outcome

Practised loops, conditional statements, logical operators, and mathematical reasoning to determine whether an exact number of moves is possible.
