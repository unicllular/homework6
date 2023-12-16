#include <stdio.h>
#include <stdlib.h>

int main()
{
 int input, max=0;
  printf("Enter numbers: ");
  do{
     scanf("%d", &input);
      if(input > max){
        max = input;
      }
  }
 while(input != 0);{
    printf("The greatest number is %d", max);
 }
    return 0;
}
