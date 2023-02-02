#include<stdio.h>
int main()
{
   
   int r,n,reverce=0;
   printf("enter number : ");
   scanf("%d",&n);
   while(n!=0)
   {
   	  r = n%10;
   	  reverce = reverce * 10 + r;
   	  n= n / 10;  
   }printf("reverce number is %d: ",reverce);
}
