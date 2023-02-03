#include<stdio.h>
int main()
{
	int i=0,j,count=0;
	char string[100];
    printf("enter value of string : ");
    scanf("%s",&string);
    printf("count of string %s is : ",string); 
	while(string[i]!=0)
	{
		count++;
		i++;
      	
		
	}
	printf("%d",count);
}
