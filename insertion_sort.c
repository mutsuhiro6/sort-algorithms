#include <stdio.h>
#include <stdbool.h>
#include "util.h"
#include "sort.h"

// Insertion Sort Algorithm.
// Insert each element into
// the appropriate index with comparing the maximum value of
// sub-array which is already sorted.
// Complexity: O(N^2).
void insertion_sort(int *A, int size)
{
  int i, j;
  for (i = 1; i < size; i++)
  {
    for (j = i; i > 0; j--)
    {
      if (A[j] < A[j - 1]) swap(&A[j], &A[j - 1]);
      else break;
    }
  }
}