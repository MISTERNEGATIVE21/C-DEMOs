 #include<stdio.h>
 #include<math.h>
 int main()
 { printf("Enterchoice 1 dec-binary number, 2 binary to decimal ");int h,n;
     scanf("%d",&h);
     int dec, bin=0, rem, i=1,j=0; 
     
switch(h)
{ case 1 :
     printf("Enter Decimal number: ");
     scanf("%d",&dec);

     while(dec!=0)
     {
         rem = dec % 2;
         bin += (rem*i);
         dec /= 2;
         i *= 10;    }

     printf("Binary= %d\n",bin);
break;
case 2:
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2,j);
        ++j;
    }
   printf("the decimal value %d",dec);

break;
default:
printf("wrong choice input");
break;
}
 return 0;
}
