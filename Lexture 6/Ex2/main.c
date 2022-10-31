#include <stdio.h>
#include <stdlib.h>
struct summ{
    float inch;
    int feet;

}x,y,add;
int main()
{
    add.inch=0;
    add.feet=0;
    printf("Enter information for first distance\n");
    printf("Enter feet :");
    scanf("%d",&x.feet);
    printf("Enter inch :");
    scanf("%f",&x.inch);
    printf("Enter information for second distance\n");
    printf("Enter feet :");
    scanf("%d",&y.feet);
    printf("Enter inch :");
    scanf("%f",&y.inch);
    add.feet=x.feet+y.feet;
    add.inch=x.inch+y.inch;
    if(add.inch>12)
    {
        add.inch = add.inch - 12.0;
        add.feet++;
    }
    printf("The distance is %d' %.2f\" ",add.feet,add.inch);

}
