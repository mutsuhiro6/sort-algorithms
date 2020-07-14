#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void shuffle_array(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = rand() % size;
        swap(&A[i], &A[j]);
    }
}

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
