/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
