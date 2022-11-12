# Implementasi penyederhanaan maze dengan algoritma LSRB

## Referensi implimentasi yaitu dari 

[https://www.pololu.com/file/0J195/line-maze-algorithm.pdf](https://www.pololu.com/file/0J195/line-maze-algorithm.pdf)

[https://fahmizaleeits.wordpress.com/2012/09/30/simple-line-maze-algorithm-short-path-maze-robot/](https://fahmizaleeits.wordpress.com/2012/09/30/simple-line-maze-algorithm-short-path-maze-robot/)

[https://towardinfinity.medium.com/coding-a-line-follower-robot-using-lsrb-and-finding-the-shortest-path-d906ffec71d](https://towardinfinity.medium.com/coding-a-line-follower-robot-using-lsrb-and-finding-the-shortest-path-d906ffec71d)

## terdapat 2 versi yaitu ditulis dengan c dan c++

- ## C 

  ```c
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
  ```

- Compile
  
  ```bash
  gcc main.c LSRB_Algorithm.c -o main.exe
  ```

- Run

  ```bash
    PS E:\Projects\LSRB_Algorithm\LSRB_Algorithm_C> ./main
    Enter the PATH : LLBRLLBSRLLBLBLBLLL
    Done Simplify
    Original PATH = LLBRLLBSRLLBLBLBLLL | Simplify PATH SRRSL
    PS E:\Projects\LSRB_Algorithm\LSRB_Algorithm_C> 
  ```

- ## Cpp 

  ```c
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
  ```

- Compile
  
  ```bash
  g++ main.cpp LSRB_Algorithm.cpp -o main.exe
  ```

- Run

  ```bash
    PS E:\Projects\LSRB_Algorithm\LSRB_Algorithm_Cpp> ./main
    Enter the PATH : LLBRLLBSRLLBLBLBLLL
    Done Simplify
    Original PATH = LLBRLLBSRLLBLBLBLLL | Simplify PATH = SRRSL
  ```