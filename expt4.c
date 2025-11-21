* NAME : Saad shekh
   UNI  : 251C036
   Branch: CIVIL
   DIV  : B */

#include <stdio.h>


int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;  

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;  // Not prime
    }

    return 1;  // Prime
}

int main() {
    int start, end, i;

    // Input range
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
