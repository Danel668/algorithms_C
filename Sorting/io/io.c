#include <stdio.h>

int input(int *arr, int n) {
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            flag = 0;
        }
        if(flag == 0) {
            break;
        }  
    }
    return flag;
}

void output(int *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n-1)
        {
            printf(" ");
        }
    }
}