#include <stdio.h>
#include <stdlib.h>

int* insert(int arr[], int size, int key, int idx) {
    int *newArr = (int*)malloc((size + 1) * sizeof(int));

    for (int i = 0; i < idx; i++) {
        *(newArr + i) = *(arr + i);
    }

    *(newArr + idx) = key;

    for (int i = idx; i < size; i++) {
        *(newArr + i + 1) = *(arr + i);
    }

    return newArr;
}

int main() {
    int arr[] = {9, 1, 2, 5, 7};
    int size = sizeof(arr) / sizeof(int);
    int key = 10, idx = 2;

    int *ptr = insert(arr, size, key, idx);

    if (ptr != NULL) {
        printf("Array after insertion:\n");
        for (int i = 0; i < size + 1; i++) {
            printf("%d\t", *(ptr + i));
        }
        free(ptr);
    }

    return 0;
}
