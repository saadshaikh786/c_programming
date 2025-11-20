/* NAME : Saad shekh
   UNI  : 251C036
   Branch: CIVIL
   DIV  : B */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Count characters until null terminator
    while (str[i] != '\0' && str[i] != '\n') { 
        i++;
    }

    printf("Length of the string = %d\n", i);

    return 0;
}
