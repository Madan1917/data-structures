// C program to print Fibonacci Series

// using goto statement

#include <stdio.h>

// Function to print Fibonacci Number

// using goto statement

void fibUsingGoto(int N)

{

int a = 0, b = 1, sum = 0;

lableFib:

// Print to series first N term

if (N != 0) {

// Print series

printf(" %d", a);

// Create next term

sum = a + b;

a = b;

b = sum;

// Decrement N

N--;

// Jump to lableFib

goto lableFib;

}

}

// Driver Code

int main()

{

// Given number N

int N = 10;

// Function Call

fibUsingGoto(N);

return 0;

}