#include <stdio.h>
#include <stdlib.h>

int main()
{
   float r,dia,circ,area;
   printf("enter the radius\n");
   scanf("%f",&r);
   dia=2*r;
   circ=2*3.14*r;
   area=3.14*r*r;
   printf("diameter = %f\n",dia);
   printf("circumference = %f\n",circ);
   printf("Area = %f\n",area);
    return 0;
}
