//9. Program to accept a number and check whether the number is Positive, Negative or Zero.

#include<stdio.h>

void main()
{
  int n;

  printf("Enter number: ");
  scanf("%d",&n);

  if(n>0)
    printf("Number is positive");
  else if(n<0)
    printf("Number is negative");
  else
    printf("Number is Zero");

}
