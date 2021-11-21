#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char **argv) {
    if(argc < 2) return 0;
    if(rename(argv[0], argv[1])) {
        perror("rename");
        return EXIT_FAILURE;
    }
    return 0;
}
