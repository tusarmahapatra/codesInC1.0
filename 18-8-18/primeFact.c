#include<stdio.h>
void main()
{
      int n;
      printf("Enter the number to be checked : ");
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
            if(n%i==0)
            {
                  printf("%d \n",i);
            }
      }
}