#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Elements ki sankhya: ");
    scanf("%d", &n);

    printf("Elements enter karo:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array ke elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}