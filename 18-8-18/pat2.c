#include<stdio.h>
void main()
{
      int n;
      printf("Enter the number of rows : ");
      scanf("%d",&n);
      for(int i=0;i<=n;i++)
      {
            if(i%2==0)
            {     
                  for(int j=i;j>=1;j--)
                  {
                        printf("%d",j);
                  }
            }
            else
            {
                  for(int j=1;j<=i;j++)
                  {
                        printf("%d",j);
                  }
            }
            printf("\n");
      }
}
