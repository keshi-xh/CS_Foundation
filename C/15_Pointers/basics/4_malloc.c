#include <stdlib.h>
#include <stdio.h>

int main() {
    int initial_size, new_size;
    printf("Enter initial array size: ");
    scanf("%d", &initial_size);

    int *arr = malloc(initial_size * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(int i = 0; i < initial_size; i++) arr[i] = i;

    printf("Array before expansion:\n");
    for(int i = 0; i < initial_size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter new array size (must be >= %d): ", initial_size);
    scanf("%d", &new_size);

    if (new_size < initial_size) {
        printf("New size must be at least %d.\n", initial_size);
        free(arr);
        return 1;
    }

    arr = realloc(arr, new_size * sizeof(int));
    if (!arr) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    for(int i = initial_size; i < new_size; i++) arr[i] = i;

    printf("Array after expansion:\n");
    for(int i = 0; i < new_size; i++) {
        if (i < initial_size)
            printf("%d ", arr[i]);
        else
            printf("[%d] ", arr[i]); // New elements in brackets
    }
    printf("\n");
   free(arr);
}