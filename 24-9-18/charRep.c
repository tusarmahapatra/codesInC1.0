#include<stdio.h>

#include<string.h>

void main()

{
      
	char s[100],reps[100];
      
	printf("Enter a string : ");
      
	scanf("%[^\n]s",&s);
      
	int l=strlen(s);
      
	reps[0]=s[0];
      
	reps[1]=s[1];
      
	for(int i=2;i<l;i++)
      
	{
            
		reps[i]=s[i-2];
      
	}
      
	printf("Replaced string is : ");
      
	puts(reps);

}

