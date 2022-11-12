#include <stdio.h>
#include "LSRB_Algorithm.h"

#define MAX_SIZE_PATH 100

int main()
{    

    //temp path for procces the algorithm
    char temp_path[MAX_SIZE_PATH] = "";
    
    //original path
    char path[MAX_SIZE_PATH] = "";

    //new path
    char new_path[MAX_SIZE_PATH] = "";

    //gets the Path
    printf("Enter the PATH : ");
    gets(path);

    //copy 
    LSRB_copy(new_path, path);

    //Simplify
    LSRB_Algorithm(new_path, temp_path);

    printf("Done Simplify\n");
    printf("Original PATH = %s | Simplify PATH %s \n", path, new_path);

    return 0;
}