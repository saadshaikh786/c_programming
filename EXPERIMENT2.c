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
    int physics;
    printf("enter your marks");
    scanf("%d", &physics);

    int math;
    printf("enter your marks");
    scanf("%d", &math);

    int chemistry;
    printf("enter your marks");
    scanf("%d", &chemistry);

    int sum;
    float avg;
    sum = physics + math + chemistry;
    avg = (float)sum / 3;
    printf("sum is %d \n avg is %f \n", sum, avg);

    if (avg >= 50) {
        printf("\n you are eligible to admission.");
    }
    else {
        printf("\n you are not eligible to admission.");
    }

    return 0;
}
