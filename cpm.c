#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
int main() {
   char cwd[PATH_MAX];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }
    char ch,str[5] = ".cpp";
    strcat(cwd,str);
    FILE *fs, *ft;
    fs = fopen(__FILE__, "r");
    if(fs == NULL)
    {
        printf("\nError in Opening the file, %s", cwd);
        
        return 0;
    }

    ft = fopen(cwd, "w");
    if(ft == NULL)
    {
        printf("\nError in Opening the file, %s", cwd);
        
        return 0;
    }
    ch = fgetc(fs);
    while(ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    printf("\nFile copied successfully.");
    fclose(fs);
    fclose(ft);
    return 0;
}
