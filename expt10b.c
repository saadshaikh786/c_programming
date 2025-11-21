* NAME : Saad shekh
   UNI  : 251C036
   Branch: CIVIL
   DIV  : B */

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;   // pointer pointing to the first element

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    // Print in reverse order
    printf("\nArray elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
