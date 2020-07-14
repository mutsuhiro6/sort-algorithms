#include <stdio.h>
#include <stdbool.h>
#include "util.h"
#include "sort.h"

// Bubble Sort Algorithm.
// Bubble sort compare adjacent elements and swap them
// if the element with larger index is smaller than with smaller it.
// Complexity: O(N^2).
void bubble_sort(int *A, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 1; j < size - i; j++)
        {
            if (A[j] < A[j - 1])
            {
                swap(&A[j], &A[j - 1]);
            }
        }
    }
}
