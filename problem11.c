#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,power;
    printf("enter the base\n");
    scanf("%d",&a);
    printf("enter he exponent\n");
    scanf("%d",&b);
    power=pow(a,b);
    printf("a power b equal=%d",power);

    return 0;
}
