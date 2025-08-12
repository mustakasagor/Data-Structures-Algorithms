#include <stdio.h>

int main() {
    int arr[100], n, i, index, element;

    printf("Enter Number of Elements in Array: ");
    scanf("%d", &n);

    printf("Enter Elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter The Index Where You Want to Insert (0 to %d): ", n);
    scanf("%d", &index);

    if(index < 0 || index > n) {
        printf("Invalid Index!\n");
        return 1;
    }

    printf("Enter The Element to Insert: ");
    scanf("%d", &element);

    for(i = n; i > index; i--) {
        arr[i] = arr[i-1];
    }

    arr[index] = element;
    n++;

    printf("Array After Insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
