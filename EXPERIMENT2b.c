
/* NAME : Saad shekh
   UNI  : 251C036
   FLIDE: CIVIL
   DIV  : B */

#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input from user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Ensure start is less than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Loop through numbers between start and end
    for (int i = start + 1; i < end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Output result
    printf("Sum of odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
