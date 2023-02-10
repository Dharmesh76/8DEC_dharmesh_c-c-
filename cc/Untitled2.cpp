#include<stdio.h>
int main()
{
	int n,a,b,d,e,f,g,h,add,sub,mul,ans;
	float div,div1,div2;
	printf("enter the number A :");
	scanf("%d",&a);
	printf("enter number B :");
	scanf("%d",&b);
	printf("\n\n");
	printf("1. For ADDITION\n2. For SUBTRACTION\n3. For MULTIPLICATION\n4. For DIVISION\n\n");
	printf("enter your choice :");
	scanf("%d",&n);
	printf("\n");
	switch (n)
	{
		case 1:
			    add = a + b;
			    printf("addition of A and B is :%d\n\n",add);
			    
			    break ;
		case 2:
				sub = a - b;
				printf("Subtraction of A and B is :%d\n\n",sub);
				
				break;
		case 3:
				mul = a * b;
				printf("Multiplication of A and B is :%d\n\n",mul);
				   
				break;
		case 4:
		 		 div = a / b;
				 printf("Division of A and B is :%f\n\n",div);
				 					    
    }
	ans = add,sub,mul,div;
	
	printf("1. for your next oppration if you want to take 2 new number.\n\n2. if you want to performe your next opration with your answer \n\n");
	printf("enter your choice :");
	scanf("%d",&d);
	printf("\n");
	switch (d)
	{
		case 1: 
		         printf("Enter your value of first number :");
		         scanf("%d",&e);
		         printf("Enter your value of second number :");
			     scanf("%d",&f);
			     printf("1. For ADDITION\n2. For SUBTRACTION\n3. For MULTIPLICATION\n4. For DIVISION\n\n");
			      printf("enter your choice :\n");
			     scanf("%d",&n);   
			switch (n)
			{
		        	case 1:
						 add = e + f;
			             printf("addition of First number  and Second Number is :%d\n",add);
			    
			                     break ;         
			    
			        case 2:
					      sub = e - f;
			           	  printf("Subtraction of First Number and Second Number is :%d\n",sub);
				
			                   	break;
			        case 3:
			              mul = e * f;
				          printf("Multiplication of A and B is :%d\n",mul);
				   
			                 	break;
			        case 4:
					     div = e / f;
				          printf("Division of A and B is :%f\n",div); 
						      	
			}
			              
			              break;
			              
		case 2:	
		       printf("enter your number for do oppration with recent answer :");
		       scanf("%d",&g);
		       printf("1. For ADDITION\n2. For SUBTRACTION\n3. For MULTIPLICATION\n4. for DIVISION\n\n");
		       printf("enter your choice :");
		       scanf("%d",&h);
		       switch (h)
		       {
		       	    case 1:
		       	  	    add = ans + g;
		       	  	    printf("Addition is :%d",add);
		       	  	    break;
		       	    case 2:
					    sub = ans - g;
						printf("Subtraction  is :%d",sub);
						
						break;
					case 3:	
					     mul = ans * g;
					     printf("multiplication is :%d",mul);
					     
					     break;
					case 4:
					   div = ans / g;
						printf("division is :%f",div);  
					     
							    
							  
		       	  	      
			   }
			   		 
		        
		
    }
      
      
	
	
	
	
	
	
	
	
	
	
	
	
}
