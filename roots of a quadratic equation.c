#include<stdio.h>
#include<math.h>
void main()
{
  float a, b, c, d, r1, r2;
  printf("enter the coefficient of the terms of the quadratic eqn.: \n");
  scanf("%f%f%f", &a,&b,&c);
  if(a==0||b==0||c==0)
    printf("invalid input!");
  else
  {
    d=b*b-4*a*c;
    if(d>0)
    {
     printf("the roots are real and distinct \n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b+sqrt(d))/(2*a);
        printf("r1=%f \n",r1);
        printf("r1=%f \n",r2);
      }
          else if(d==0)
      {
     printf("the roots are real and equal");
     r1=r2=-b/(2*a);
     printf("\n r1=r2=%f", r1);
      }
          else
          {
            printf("the roots are complex");
            r1=-b/(2*a);
            r2=sqrt(fabs(d))/(2*a);
            printf("\n r1=%f+i%f",r1, r2);
            printf("\n r2=%f+i%f",r1,r2);
          }
          }
}
