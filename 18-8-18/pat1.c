#include<stdio.h>
void main()
{
      int n;
      printf("\nEnter the number of rows : ");
      scanf("%d",&n);
      for(int i=0;i<=n-1;i++)
      {
            for(int j=i+65;j>=65;j--)
            {
                  printf("%c",j);
            }
            printf("\n");
      }
}
