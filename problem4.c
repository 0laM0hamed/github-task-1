#include <stdio.h>
#include <stdlib.h>

int main()
{
  int length,breadth,perimeter;
  printf("enter length\n");
  scanf("%d",&length);
  printf("enter breadth\n");
   scanf("%d",&breadth);
  perimeter=2*(length+breadth);
  printf("Perimeter=%d",perimeter);
    return 0;
}
