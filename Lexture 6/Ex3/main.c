#include <stdio.h>
#include <stdlib.h>
struct number
{
    float R_num;
    float I_num;
}x,y,sum;
int main()
{
    sum.I_num=0;
    sum.R_num=0;
    printf("Enter data for first number \n");
    printf("Enter real number then imaginary number :");
    scanf("%f %f",&x.R_num,&x.I_num);
    printf("Enter data for second number \n");
    printf("Enter real number then imaginary number :");
    scanf("%f %f",&y.R_num,&y.I_num);
    sum.I_num=x.I_num+y.I_num;
    sum.R_num=x.R_num+y.R_num;
    printf("The result = %.2f+%.2f i",sum.R_num,sum.I_num);


}
