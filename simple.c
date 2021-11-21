#include<stdio.h>
#include"a.h"
#include <unistd.h>
int main() 
{ printf ("this is cool");
   char cwd[PATH_MAX];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }
   cpm(cwd);}
