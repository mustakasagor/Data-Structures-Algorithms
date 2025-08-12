#include <stdio.h>

int main() {
    int arr[100], n, i, index;

    printf("Enter Number of Elements in Array: ");
    scanf("%d", &n);

    printf("Enter %d Elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter The Index of Element To Delete (0 to %d): ", n - 1);
    scanf("%d", &index);

    if(index < 0 || index >= n) {
        printf("Invalid Index!\n");
        return 1;
    }

    for(i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array After Deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
