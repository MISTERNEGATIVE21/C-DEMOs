#include<stdio.h>
#include<string.h>
int main()
{
	int a[50], n, i, j, c,q, d = 0, base = 1, rem ;
	char s ;
	
	do
	{
	printf("Press 1 to convert a number Decimal -> Binary\nPress 2 to convert a number Binary -> Decimal\n");
	printf("Enter your option: ");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
			{
				printf("\nCONVERSION OF DECIMAL NUMBERS TO BINARY");
    			printf("\nPlease Enter the Decimal Number:  ");
    			scanf("%d", &n);    
    			for(i = 0; n > 0; i++)
    			{
        			a[i] = n % 2;
        			n = n / 2;
    			}	   
    			printf("\nBinary value of the given number =  ");
    			for(j = i - 1; j >= 0; j--)
				{
        			printf("%d", a[j]);
    			}
    				printf("\n");
    				break;
				}
		case 2 :
			{
				printf("\nCONVERSION OF BINARY TO DECIMAL");
    			printf("\nPlease Enter the Binary Number :  "); 
    			scanf ("%d", &n);    
      			while ( n > 0)  
    				{  
        				rem = n % 10;  
        				d = d + rem * base;  
        				n = n / 10; 
        				base = base * 2;  
    				}  
    			printf ("\nThe Decimal value of the given number is %d \t", d); 
    			n=0,base=1,d=0,rem=0;
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
