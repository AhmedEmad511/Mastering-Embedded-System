#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define area(r)(pi*(r)*(r))
int main()
{
   int radius;
   float area;
   printf("Enter radius :");
   scanf("%d",&radius);
   area=area(radius);
   printf("Area =%.2f",area);

}
