#include <stdio.h>

void arraySum(int *arr1, int *arr2, int *sumArr, int size) {
    for (int i = 0; i < size; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], sumArr[size];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    arraySum(arr1, arr2, sumArr, size);

    printf("Sum of the two arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("Sum of element %d: %d\n", i + 1, sumArr[i]);
    }

    return 0;
}
