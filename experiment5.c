/* NAME : Saad shekh
   UNI  : 251C036
   Branch: CIVIL
   DIV  : B */
#include <stdio.h>


long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}


long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number does not exist.\n");
        return 0;
    }

    printf("Factorial of %d using Iterative method: %lld\n", num, factorialIterative(num));
    printf("Factorial of %d using Recursive method: %lld\n", num, factorialRecursive(num));

    return 0;
}

