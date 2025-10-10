/* NAME : SAAD SHEKH
   UNI  : 251C036
   FLIDE: CIVIL
   DIV  : B */

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
