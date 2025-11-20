
/* NAME : Saad shekh
   UNI  : 251C036
   Branch: CIVIL
   DIV  : B */
#include <stdio.h>


void counter() {
    static int count = 0; // Static variable retains its value between calls
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    
    counter();
    counter();
    counter();
    counter();
    
    return 0;
}
