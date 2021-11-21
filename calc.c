#include<stdio.h>
int main()
{ double a,b,m,d;
 int c,q=1;
	do
	{
	printf("Press 1 For Addition \nPress 2 For Subtraction\n Press 3 for Multiplication \n Press 4 For Division\n");
	printf("Enter your option: ");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
			{
				printf("\nADDITION OPERATION");
    			printf("\nPlease Enter the Number You want to Add :  ");
    			scanf("%lf", &a);  
    			printf("\nPlease Enter ANother Number You want to Add :  ");
    			scanf("%lf", &b);   
    		double add = a+b;
    			printf("\nThe added value is %lf",add);
    				break;
				}
		case 2 :
			{
				printf("\nSubstraction Operation");
    			printf("\nPlease Enter the Number You want to Substract :  "); 
    			scanf ("%lf", &a);   
    			printf("\nPlease Enter Another Number You want to Subtract :  ");
    				scanf ("%lf", &b); 
      		double sub = a-b;
      		printf("\n The substraction is %lf",sub);
    			break;			
			}
			case 3 :
			{
				printf("\nMULTIPLICATION OPERATION");
    			printf("\nPlease Enter the Number You want to MULTIPLY :  ");
    			scanf("%lf", &a);  
    			printf("\nPlease Enter another You want to MULTIPLY :  ");
    			scanf("%lf", &b);   
    		double mul = a*b;
    			printf("\nThe multiplied value is %lf",mul);
    				break;
			    
			}
    				case 4 :
			{
				printf("\nDIVISION OPERATION");
    			printf("\nPlease Enter the Number You want to Divide:  ");
    			scanf("%lf", &a);  
    			printf("\nPlease Enter another Number You want to Divide :  ");
    			scanf("%lf", &b);   
    		double div = a/b;
    			printf("\nThe Division value is %lf",div);
    				break;
				}
		default: 
			{
				printf("Invalid Input");
			}	
	}
		printf("\nWant to reexecute? (press 1 for YES or 0 No)\n");
		scanf("%d",&q);
	}	while(q==1);
			
	return 0;
}
