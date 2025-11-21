
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
