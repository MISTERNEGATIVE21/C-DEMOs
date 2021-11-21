#include<stdio.h>
#include<stdlib.h>

void main()
{
    float *p, sum = 0;
    int i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    p = (float*)malloc(n*sizeof(float));

    for(i = 0; i < n; i++)
    {
        printf("Enter the  %d element: ", i+1);
        scanf("%f", p+i);
    }
    for(i = 0; i < n; i++)
    {
        sum += *(p+i);
    }

    printf("\nAverage = %.2f\n", sum/n);
}

