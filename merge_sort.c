#include <stdio.h>
#include "util.h"
#include "sort.h"

void merge_sort(int *A, int size)
{
  if (size > 1)
  {
    int i;
    int tmp[size];
    int size_l = size / 2;
    int size_r = size - size_l;
    int mid = size_l - 1;
    int *L = &A[0];
    int *R = &A[mid + 1];
    merge_sort(&A[0], size_l);
    merge_sort(&A[mid + 1], size_r);
    for (i = 0; i < size_l; i++)
    {
      tmp[i] = L[i];
    }
    for (i = 0; i < size_r; i++) {
      tmp[size - 1 - i] = R[i];
    }
    int l = 0;
    int r = size - 1;
    for (i = 0; i < size; i++)
    {
      if (tmp[l] < tmp[r])
      {
        A[i] = tmp[l];
        l++;
      }
      else {
        A[i] = tmp[r];
        r--;  
      }
    }
  }
}