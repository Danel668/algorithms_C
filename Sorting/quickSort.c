#include <stdio.h>

void quickSort(int *arr, int left, int right) {
    int pivot;
    int left_wall = left;
    int right_wall = right;
    pivot = arr[left];
    while (left < right) {
        while ((arr[right] >= pivot) && (left < right)) {
            right--;
        }
        if (left != right) {
            arr[left] = arr[right];
            left++;
        }
        while ((arr[left] <= pivot) && (left < right) ) {
            left++;
        }
        if (left != right) {
            arr[right] = arr[left];
            right--;
        }
    }
    arr[left] = pivot;
    pivot = left;
    left = left_wall;
    right = right_wall;
    if (left < pivot) {
        quickSort(arr, left, pivot - 1);
    }
    if (right > pivot) {
        quickSort(arr, pivot + 1, right);
    }
}