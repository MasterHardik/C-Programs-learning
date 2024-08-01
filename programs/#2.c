//2. Program to assign values of two numbers and print their addition.

#include<stdio.h>


void main()
{
  //one way is -> int a=10,b=20;   //this copies the values in the variable 
  //other way is -> int a(2) ;     //this way the Initialization too is done 
 
  int a(5), b(6) ;      //initialization
  int ans = a + b;      //assigning 

  printf("Addition is : %d",ans);

}
