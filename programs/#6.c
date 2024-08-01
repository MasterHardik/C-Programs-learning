//6. Program to accept a number from user and print it’s square & cube.

#include<stdio.h>

void main()
{
  int n,square,cube;


  printf("Enter Number: ");
  scanf("%d",&n);

  square=n*n;
  cube=n*n*n;

  printf("\nSquare: %d\nCube: %d",square,cube);

}
