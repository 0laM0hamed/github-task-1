#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C ,F;
    printf("enter the temperature in celsius\n");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("temperature in fahrenheit=%f",F);
    return 0;
}
