#include<stdio.h>
void main()
{
      float add,sub,div,mul,a,b;
      int c;
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\t\t\t\t\t\t*************************************************\n");
      printf("\t\t\t\t\t\t*                   CALCULATOR                  *\n");
      printf("\t\t\t\t\t\t*************************************************\n");
      printf("\t\t\t\t\t\t*           1. ADDITION                         *\n");
      printf("\t\t\t\t\t\t*           2. SUBTRACTION                      *\n");
      printf("\t\t\t\t\t\t*           3. MULTIPLICATION                   *\n");
      printf("\t\t\t\t\t\t*           4. DIVISION                         *\n");
      printf("\t\t\t\t\t\t*************************************************\n");
      printf("\t\t\t\t\t\t           ENTER YOUR CHOICE : ");
      scanf("%d",&c);
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\t\t\t\t\t\t Enter the two numbers to be operated on : \n");
      scanf("%f%f",&a,&b);
      
      switch(c)
      {
            case 1 : 
            {
                  add=a+b;
                  printf("\t\t\t\t\t\tThe sum of %f and %f is %.2f.",a,b,add);
                  break; 
            }
            case 2 : 
            {
                  sub=a-b;
                  printf("\t\t\t\t\t\tThe difference between %f and %f is %.2f.",a,b,add);
                  break;
            }
            case 3
            {
                  mul=a*b;
                  printf("\t\t\t\t\t\tThe product of %f and %f is %.2f.",a,b,add);
                  break;
            }
            case 4 : 
            {
                  div=a/b;
                  printf("\t\t\t\t\t\tThe division of %f by %f gives %.2f.",a,b,add);
                  break;
            }
            default :
            {
                  printf("\t\t\t\t\t\tERROR!!!PLEASE TRY AGAIN!");
            }
      }
}

