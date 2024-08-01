//7. Program to accept two values of a & b and swap their values.
//In this I used addition and subtraction to avoid use of thord varible 
//swaping without using third variable
#include<stdio.h>

void main()
{
  int a,b;

  printf("Enter 1st number : ");
  scanf("%d",&a);

  printf("Enter 2nd number : ");
  scanf("%d",&b);

  printf("\nBefore Swapping...");
  printf("A=%d, B=%d",a,b);
//Add and subtract logic to swap
  a=a+b;
  b=a-b;
  a=a-b;

  printf("\nAfter Swapping...");
  printf("\n A=%d, B=%d",a,b);

}
