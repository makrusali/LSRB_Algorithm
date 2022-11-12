#include <iostream>
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
    std::cout << "Enter the PATH : ";
    std::cin >> path;

    //copy 
    LSRB::copy(new_path, path);

    //Simplify
    LSRB::Algorithm(new_path, temp_path);

    std::cout << "Done Simplify\n";
    std::cout << "Original PATH = " << path << " | Simplify PATH = " << new_path << std::endl;

    return 0;
}