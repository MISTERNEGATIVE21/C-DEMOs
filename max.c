
#include <stdio.h>

int main()
{
    int num1, num2, num3, max,min;

    /* Input three numbers from user */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            min = num3;
            max = num1;
        }
        else
        {
            min= num1;
            max = num3;
        }
    }
    else
    {
        if(num2 > num3)
        {
            min = num3;
            max = num2;
        }
        else
        {
            min= num2;
            max = num3;
        }
    }
    
     printf("Minimum among all three numbers = %d", min);
    printf("Maximum among all three numbers = %d", max);

    return 0;
}
