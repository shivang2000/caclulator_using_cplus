#include <stdio.h>

int main(void){
  int a,b,c,d;
  printf("This is a calculator using c\n");
  printf("press 1 to do addition\n");
  printf("press 2 to do subtraction\n");
  printf("press 3 to do multiplication\n");
  printf("enter the number for which the fuction you want to do =");
  scanf("%i",a);
  switch (a) {
    case 1:
      printf("\nenter the first number = ");
      scanf("%i",b);
      printf("\nenter the second number = ");
      scanf("%i",c);
      d = b + c;
      printf("the value of %i + %i = %i",b,c,d);
      break;
    case 2:
    printf("\nenter the first number = ");
    scanf("%i",b);
    printf("\nenter the second number = ");
    scanf("%i",c);
    d = b - c;
    printf("the value of %i - %i = %i",b,c,d);
    break;
    case 3 :
    printf("\nenter the first number = ");
    scanf("%i",b);
    printf("\nenter the second number = ");
    scanf("%i",c);
    d = b * c;
    printf("the value of %i * %i = %i",b,c,d);
    break;
  }
}
