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
    
    box("image1.pgm");
    std::cout << "\nTask C: Create a box in the picture: Completed at taskC.pgm\n";
    std::cout << "\n------------------\n";

    frame("image1.pgm");
    std::cout << "\nTask D: Framing center of picture: Completed at taskD.pgm\n";
    std::cout << "\n------------------\n";

    doubleScale("image2-resize.pgm");
    std::cout << "\nTask E: Doubling size of image: Completed at taskE.pgm\n";
    std::cout << "\n------------------\n";

    pixelate("image1.pgm");
    std::cout << "\nTask F: Pixelating image: Completed at taskF.pgm\n";
    std::cout << "\n------------------\n";

    return 0;
}