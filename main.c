#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0;

  while(y==0){
    printf("Enter the number x: ");
    scanf("%d", &x);
    if (x<0)
        break;
  }
}
