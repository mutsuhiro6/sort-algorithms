#include <stdio.h>
#include "util.h"

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_array(int *A, int size)
{
    printf("( ");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf(")\n");
}
