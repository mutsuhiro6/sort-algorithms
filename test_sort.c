#include <stdio.h>
#include <string.h>
#include <time.h>
#include "sort.h"
#include "util.h"

int ANSWER[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int INPUT[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int size = sizeof(INPUT) / sizeof(int);

int test_merge_sort()
{
    shuffle_array(INPUT, size);

    printf("\nMERGE SORT\n");
    printf("before:");
    print_array(INPUT, size);

    merge_sort(INPUT, size);

    printf("after: ");
    print_array(INPUT, size);
    return memcmp(INPUT, ANSWER, sizeof(INPUT));
}

int test_insertion_sort()
{
    shuffle_array(INPUT, size);

    printf("\nINSERTION SORT\n");
    printf("before:");
    print_array(INPUT, size);

    insertion_sort(INPUT, size);

    printf("after: ");
    print_array(INPUT, size);
    return memcmp(INPUT, ANSWER, sizeof(INPUT));
}

int test_selection_sort()
{
    shuffle_array(INPUT, size);

    printf("\nSELECTION SORT\n");
    printf("before:");
    print_array(INPUT, size);

    selection_sort(INPUT, size);

    printf("after: ");
    print_array(INPUT, size);
    return memcmp(INPUT, ANSWER, sizeof(INPUT));
}

int test_bubble_sort()
{
    shuffle_array(INPUT, size);

    printf("\nBUBBLE SORT\n");
    printf("before: ");
    print_array(INPUT, size);

    bubble_sort(INPUT, size);

    printf("after: ");
    print_array(INPUT, size);
    return memcmp(INPUT, ANSWER, sizeof(INPUT));
}

int main(void)
{
    srand((unsigned int)time(NULL));
    if (test_bubble_sort() != 0)
        printf("ERROR in Bubble sort.\n");
    if (test_selection_sort() != 0)
        printf("ERROR in Selection sort.\n");
    if (test_insertion_sort() != 0)
        printf("ERROR in Insertion sort.\n");
    if (test_merge_sort() != 0)
        printf("ERROR in Merge sort.\n");
    return 0;
}