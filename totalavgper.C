#include <stdio.h>
int main()
{
    float a, b, c, d, e, s, avg,per;
    printf("Enter 5 numbers : ");
    scanf("%f%f%f%f%f",&a, &b, &c, &d, &e);
    s=a + b + c + d + e;
    avg = s / 5;
    per=(s/100)*5;
    printf("\nThe sum is : %f",s);
    printf("\nThe average is : %f",avg);
    printf("\nThe percentage is : %f",per);
return 0;
}
