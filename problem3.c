#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,sum,sub,multi,div,mod;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
sum= a+b;
sub=a-b;
multi=a*b;
div=a/b;
mod=a%b;
printf("Sum=%d\n",sum);
printf("difference=%d\n",sub);
printf("product=%d\n",multi);
printf("quotient=%d\n",div);
printf("modulus=%d\n",mod);



    return 0;
}
