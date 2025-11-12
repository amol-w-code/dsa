#include <stdio.h>
#include <stdlib.h>

int* deleteElement(int arr[], int size, int idx) {
    int *newArr = (int*)malloc((size - 1) * sizeof(int));

    for (int i = 0; i < idx; i++) {
        *(newArr + i) = *(arr + i);
    }

    for (int i = idx + 1; i < size; i++) {
        *(newArr + i - 1) = *(arr + i);
    }

    return newArr;
}

int main() {
    int arr[] = {9, 1, 2, 5, 7};
    int size = sizeof(arr) / sizeof(int);
    int idx = 2;

    int *ptr = deleteElement(arr, size, idx);

    printf("Array after deletion:\n");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", *(ptr + i));
    }

    free(ptr); 
    return 0;
}
