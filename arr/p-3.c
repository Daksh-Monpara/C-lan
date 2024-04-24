#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Squares of the elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d squared = %d\n", arr[i], arr[i] * arr[i]);
    }

}

