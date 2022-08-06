// to add two numbers//
#include<stdio.h>
int add( int a, int b, int c, int d)
{
 int sum = a+b+c+d;
 return sum ;
}
int main() 
{
 int a, b , c, d,sum;
  printf("enter the value of thefour numbers which have to be added: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  sum=add(a,b,c,d);
  printf("the sum of thetwo numbers which you have entered is= %d ", sum);
  return 0;
}
  
