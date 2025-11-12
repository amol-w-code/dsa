#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 0};
    int n = 4;
    int element = 50;
    int *ptr = arr; 
    
    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  
    }
    for (int i = n - 1; i >= 0; i--) {
        *(ptr + i + 1) = *(ptr + i);
    }

    *ptr = element;

    printf("\nArray after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
