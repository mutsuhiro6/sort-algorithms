#include <stdio.h>
#include <stdbool.h>
#include "util.h"
#include "sort.h"

// Selection Sort Algorithm
// Find (Select) minimum element of 
// an array other than the target and swap them.
// Complexity: O(N^2).
void selection_sort(int *A, int size)
{
  int i, j;
  for (i = 0; i < size - 1; i++)
  {
    int min = i;
    for (j = i + 1; j <= size - 1; j++)
    {
      if (A[j] < A[min])
      {
        min = j;
      }
    }
    swap(&A[i], &A[min]);
  }
}