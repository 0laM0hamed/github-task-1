#include <stdio.h>
#include <stdlib.h>

int main()
{
  float lcm,lm,lkm;
   printf("enter the length in cm\n");
   scanf("%f",& lcm);
   lm= lcm/100;
   lkm= lcm/100000;
   printf("length in m =%f\n",lm);
    printf("length in km =%f\n",lkm);

    return 0;
}
