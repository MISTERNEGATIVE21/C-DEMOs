#include <stdio.h>
int main(){
	int choice, conti=1;
	while (conti > 0){
	printf("Press 1 For Concatenate two Strings \nPress 2 For Comparison Check\nPress 3 For a string Reverse \n");        printf("Enter your option: ");
	scanf("%d", &choice);
	
	switch(choice){
		
		case 1: concatenate();
		break;
		
		case 2: compare();
		break;
		case 3: rev();
		break;
		default: printf("\nWrong Choice\n");
		break;
		
	}
	
	printf("\n Do you wish to continue?Press 1 to continue, 0 to exit ");
	scanf("%d", &conti);
	
}


}

int compare(){
	char str1[20], str2[20];
	printf("Enter 1st String: ");
	scanf("%s", &str1);
	printf("Enter 2nd String: ");
	scanf("%s", &str2);
	
	int flag=0,i=0;  
    while(str1[i]!='\0' && str2[i]!='\0')  
    {  
       if(str1[i]!=str2[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    printf("\nThe strings are equal");  
    else  
    printf("\nStrings are not equal");
    return 0;
}

int concatenate(){
	char str1[100], str2[100], final[100];
	int i=0, j=0;
	printf("Enter 1st String: ");
	scanf("%s", &str1);
	printf("Enter 2nd String: ");
	scanf("%s", &str2);
	
	  
    while (str1[i] != '\0') {
        final[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0') {
        final[j] = str2[i];
        i++;
        j++;
    }
    final[j] = '\0';
  
    printf("\nConcatenated string: %s", final);
  
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
