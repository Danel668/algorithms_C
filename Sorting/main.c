#include <stdio.h>
#include "bubble_sort.h"
#include "quickSort.h"
#include "mergeSort.h"
#include "io/io.h"

int main() {
    int n;
    printf("Enter size of array: ");
    if ( scanf("%d", &n) == 1)
    {
        int arr[n];
        printf("Enter the integer elements of the array: ");
        if (input(arr, n) == 1)
        {
            int c;
            printf("Choose a sorting method:\n1 - Bubble Sort\n2 - Quick Sort\n3 - Merge Sort\n");
            scanf("%d", &c);
            switch (c)
            {
            case 1:
                printf("Array before: ");
                output(arr, n);
                printf("\n");
                bubble_sort(arr, n);
                printf("Array after: ");
                output(arr, n);
                break;
            case 2:
                printf("Array before: ");
                output(arr, n);
                printf("\n");
                quickSort(arr, 0, n - 1);
                printf("Array after: ");
                output(arr, n);
                break;
            case 3:
                printf("Array before: ");
                output(arr, n);
                printf("\n");
                mergeSort(arr, 0, n);
                printf("Array after: ");
                output(arr, n);
                break;
            default:
                printf("n/a");
                break;
            }
        } else {
            printf("n/a");
        }
    } else {
        printf("n/a");
    }
    return 0;
}