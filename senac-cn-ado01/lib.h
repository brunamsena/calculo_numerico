#include <stdio.h>
#include <stdlib.h>

void trat_param(int p_argc, char **p_argv){
    if (p_argc != 4){
        printf("Quantidade de parametros passada foi %d e a quantidade correta é 4\n", p_argc);
        exit(1);
    }

    int a = 1 * 'A';
    printf("%d", a);

    // *(p_argv+1) -> for char in p_argv: result = char * 1 -> if ((result > A * 1 && result < V * 1)  || (result > a * 1 && result < v * 1) && 0 < int(result) < 9
    // argv[2] base 16 -> 0 à F 

    /*if (*(p_argv+1)){

    }*/
    printf("%s\n", *(p_argv+2));
}

