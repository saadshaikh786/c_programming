/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
