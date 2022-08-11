#include<stdio.h>
#include<math.h>
void main()
{
  float a, b, c, d, root1, root2;
  printf("enter the coefficient of the terms of the quadratic eqn.: \n");
  scanf("%f%f%f", &a,&b,&c);
  if(a==0||b==0||c==0)
    printf("invalid statement");
  else()
  {
    d=b*b-4ac;
    if(d>0)
      printf(" the roots are real and distinct \n"); 
      r1=(-b+sqrt(d)/(2*a);
      r2=(-b-sqrt(d)/(2*a);
      printf("r1=%f",r1);
      printf("r2=%f",r2);
      }
      else if(d==0)
      {
        printf("the roots ARE REAL AND DISTINCT \n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b+sqrt(d))/(2*a);
        printf("r1=%f \n",r1);
        printf("r1=%f \n",r2);
      }
          else if(d==0)
      {
     printf("the roots are real and equal");
     r1=r2=-b(2*a);
     printf("\n r1=r2=%f", r1);
      }
          else
          {
            printf("the roots are complex");
            
