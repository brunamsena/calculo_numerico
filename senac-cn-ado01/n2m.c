#include <stdio.h>
#include <stdlib.h>
//#include "lib.c"

int main(int argc, char *argv[]){
    int i;

    if (argc != 4){
        exit(1);
    }
    for (i=1; i<argc; i++){
        printf("%s\n", argv[0]);
        printf("Parametro %d: %s\n", i, argv[i]);
    }
    return 0;
}