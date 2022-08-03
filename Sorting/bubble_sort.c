#include <stdio.h>

void bubble_sort(int *arr, int n) {
    for (int i = 1; i <= n; i++) {
        for (int j =  i - 1 ; j > 0; j--) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }   
        }   
    }
}