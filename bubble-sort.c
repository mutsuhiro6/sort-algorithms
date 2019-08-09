#include <stdio.h>
#include <stdbool.h>
#include "util.h"
#include "sort.h"

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
