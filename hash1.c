#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {0, 0, 0, 1, 1, 2, 3, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int* hash = (int*)calloc(max + 1, sizeof(int));  

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    for (int i = 0; i <= max; i++) {
        if (hash[i] > 0)
            printf("%d-%d\n", i, hash[i]);
    }

    free(hash);
    return 0;
}
