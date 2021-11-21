#include <stdio.h>

int Prime(int num);

int main()
{ 
 int c,q=1,temp,fact,num;
        do
        {
        printf("Press 1 For Factorial \nPress 2 For Prime Check\n");        printf("Enter your option: ");
        scanf("%d",&c);
        switch(c)
        {
                case 1 :
                       printf("\nEnter the Number:");

scanf ("%d", &num);
if(num<0)
{printf("enter positive numbers and rerun\n");
 }
for (temp=1,fact=1; temp<=num;temp++)
{
fact=fact*temp;
}
printf("the factorial is %d",fact);
break;
case 2:
printf("Enter any number: ");
    scanf("%d", &num);
    if(Prime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
break;

    
  default:
                        {
                                printf("Invalid Input");
                        }
        }
                printf("\nWant to reexecute? (press 1 for YES or 0 No)\n");
                scanf("%d",&q);
        }       while(q==1);

        return 0;
}
int Prime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
      
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}
  
