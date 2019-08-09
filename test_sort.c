#include <stdio.h>
#include "sort.h"
#include "util.h"

int test_bubble_sort()
{
    printf("\nbubble sort\n");
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

int main(void)
{
    test_bubble_sort();
    return 0;
}