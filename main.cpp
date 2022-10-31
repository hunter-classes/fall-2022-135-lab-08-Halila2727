/*
  Author: Halil Akca
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab 08
  This program will call the functions made in other .cpp files
*/

#include <iostream>
#include <string>
#include "funcs.h"
#include "imageio.h"

int main()
{
    invert("image1.pgm");
    std::cout << "\nTask A: Inverting Image: Completed at taskA.pgm\n";
    std::cout << "\n------------------\n";
    
    invertHalf("image1.pgm");
    std::cout << "\nTask B: Inverting Half the Image: Completed at taskB.pgm\n";
    std::cout << "\n------------------\n";
    
    //std::cout << 

    return 0;
}