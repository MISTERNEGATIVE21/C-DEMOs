#include <stdio.h>
#include <math.h>
int main()

{
    int i, end, sum , rem,digit,temp;

    printf("Enter the value of N: ");
    scanf("%d", &end);
    printf("All Armstrong numbers from 1 to %d:\n\n", end);
	for (i= 1; i<= end; i++) 
	{
		temp = i ;
		 digit = (int)log10(temp) + 1;
		sum = 0;
		while (temp != 0) 
		{
        	rem = temp % 10;
        	sum +=pow(rem,digit);
        	temp /= 10;
    	}
	    if (sum == i)
        printf("%d,",i );   
        sum=0;
	}

	return 0;
}
