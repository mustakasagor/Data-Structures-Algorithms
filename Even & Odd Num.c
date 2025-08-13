#include <stdio.h>

int main() {
    int n, i, number;
    int evenCount = 0, oddCount = 0;

    printf("Enter The Number of Elements: ");
    scanf("%d", &n);

    printf("Enter %d Integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\nEven Numbers: %d\n", evenCount);
    printf("Odd Numbers: %d\n", oddCount);

    return 0;
}
