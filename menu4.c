#include <stdio.h>
int main(){
        int choice, conti=1;
        char str1[100]={0};
	char str2[100]={0};
        char *pStr1=str1;
	char *pStr2=str2;
	
        while (conti > 0){
        printf("Press 1 For Concatenate two Strings \nPress 2 For Comparison Check\nPress 3 For a string Reverse \n") ;
        scanf("%d", &choice);

        switch(choice){

                case 1:concatenate();
                break;

                case 2: cmy();
                break;
                case 3: rev();
                break;
                default: printf("\nWrong Choice\n");
                break;

        }

        printf("\n Do you wish to continue?Press 1 to continue, 0 to exit ");
        scanf("%d", &conti);
}
int cmy(){

	
	
	int loop;	//loop counter
	int flag=1;

	printf("Enter string 1: ");	
	scanf("%s",pStr1);
	printf("Enter string 2: ");	
	scanf("%s",pStr2);
	printf("string1: %s\nstring2: %s\n",pStr1,pStr2);
	
	//comparing strings
	for(loop=0; (*(pStr1+loop))!='\0'; loop++)
	{
		if(*(pStr1+loop) != *(pStr2+loop))
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
		printf("Strings are same.\n");
	else
		printf("Strings are not same.\n");
	
	return 0;	
}
}
int concatenate(){
       char aa[100], bb[100];

    printf("\nEnter the first string: ");
    gets(aa);   // inputting first string

    printf("\nEnter the second string to be concatenated: ");
    gets(bb);   // inputting second string

    char *a = aa;
    char *b = bb;

    // pointing to the end of the 1st string
    while(*a)   // till it doesn't point to NULL-till string is not empty
    {
        a++;    // point to the next letter of the string
    }
    while(*b)   // till second string is not empty
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  // string must end with '\0'
    printf("\n\n\nThe string after concatenation is: %s ", aa);
    return 0;
}

int rev()
{
    char str[50];
    char revStr[50];

    char *strPtr = str;
    char *revPtr = revStr;

    int len = -1;

    printf("Enter The String to reverse:\n\n");
    scanf("%s",str);

    while(*strPtr)
  {
      strPtr++;
      len++;
    }

    while (len >= 0)
  {
      strPtr--;
      *revPtr = *strPtr;
      revPtr++;
      --len;
    }
     *revPtr='\0';
     printf("\n\nReverse String Is \n\n%s",revStr);
    return 0;
}
