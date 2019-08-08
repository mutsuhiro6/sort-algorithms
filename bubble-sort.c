#include <stdio.h>
#include <stdbool.h>
#include "util.h"

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

int main()
{
    int A[5] = {9, 7, 5, 3, 2};
    int size = sizeof(A) / sizeof(0);
    int i;
    printf("before: ");
    print_array(A, size);

    bubble_sort(A, size);

    printf("after: ");
    print_array(A, size);
    return 0;
}
