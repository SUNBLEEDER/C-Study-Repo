#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i;

    printf("Enter size: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    if (!arr) return 1;
    for (i = 0; i < n; i++) arr[i] = i + 1;
    printf("malloc: "); for (i = 0; i < n; i++) printf("%d ", arr[i]); printf("\n");

    arr = calloc(n, sizeof(int));
    if (!arr) return 1;
    printf("calloc: "); for (i = 0; i < n; i++) printf("%d ", arr[i]); printf("\n");

    printf("Enter new size: ");
    scanf("%d", &n);
    arr = realloc(arr, n * sizeof(int));
    if (!arr) return 1;
    for (i = 0; i < n; i++) arr[i] = i + 1;
    printf("realloc: "); for (i = 0; i < n; i++) printf("%d ", arr[i]); printf("\n");

    free(arr);
    return 0;
}