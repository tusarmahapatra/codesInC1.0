#include<stdio.h>
#include<math.h>
void main()
{
      float a,b,c,r1,r2,D,rtD;
      printf("Enter the coefficients of the quadratic equation a, b, c : \n");
      scanf("%f%f%f",&a,&b,&c);
      D=(b*b)-(4*a*c);
      rtD=sqrt(D);
      r1=(-b+(rtD))/(2*a);
      r2=(-b+(rtD))/(2*a);
      printf("The roots of the quadratic equations are %5.2f and %5.2f. \n", r1,r2);
}

