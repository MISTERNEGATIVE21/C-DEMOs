#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void concatenate(char *s1,char *s2);
int compare(char *s1,char *s2);
void reverse(char *s);
int main()
{
int choice,s;
do
{
printf("MENU\nPress 1 to Concatenate two strings.\nPress 2 to Compare two
strings.\nPress 3 to reverse a string.\n");
printf("Enter your choice: ");
scanf("%d",&choice);
{
switch(choice)
{
case 1:
{
printf("\nConcatenating Two Strings!!\n");
char s1[1000],s2[1000];
printf("Enter String1: ");

scanf("%s",s1);
printf("Enter String2: ");
scanf("%s",s2);
concatenate(s1,s2);
printf("Concatenated String is ='%s'\n",s1);
break;

}
case 2:
{
printf("\nComparing Two Strings!!\n");
char s1[1000],s2[1000],c;
printf("Enter String1: ");
scanf("%s",s1);
printf("Enter String2: ");
scanf("%s",s2);
c=compare(s1,s2);
if(c)
printf("Strings are equal\n");
else
printf("Strings are not equal\n");
break;
}
case 3:
{
printf("\nReversing a String!!\n");
char s[1000];
printf("Enter the String: ");
scanf("%s",s);
printf("Original String = %s\n",s);
reverse(s);
printf("Reversed String = %s\n",s);
break;
}
case 4:

{
exit(0);
}
default:
{
printf("WRONG CHOICE!!");
}
}
}
printf("\nWant to do more? \nIf yes press 5, else press 0\n");
scanf("%d",&s);
}while(s==5);
printf("TERMINATED");
return 0;
}
void concatenate(char *s1,char *s2)
{
while(*s1)
{
s1++;
}
while(*s2)
{
*s1 = *s2;
s2 ++;
s1 ++;
}
*s1 = '\0';
}
int compare(char *s1,char *s2)
{
{
int i,c=0;
if(strlen(s1)==strlen(s2))
{
for(i=0;s2[i];i++)
{
if(s1[i]==s2[i])
c++;
}
if(c==i)
return 1;
}
return 0;
}
}
void reverse(char *s)
{
int i,temp,n;
n=strlen(s);
for(i=0;i<n/2;i++)
{
temp=s[i];
s[i]=s[n-i-1];
s[n-i-1]=temp;
}
}

