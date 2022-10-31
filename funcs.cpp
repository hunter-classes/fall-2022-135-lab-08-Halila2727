/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 8A to 8F
    This program will perform all the tasks
*/

#include <iostream>
#include <string>
#include "imageio.h"

// int MAX_H = 512;
// int MAX_W = 512;

void invert(std::string input)
{
    int height = 0;
    int width = 0;
    int image[MAX_H][MAX_W];

    readImage(input, image, height, width);

    int output[MAX_H][MAX_W];

    for(int row = 0; row < height; row++) 
    {
        for(int col = 0; col < width; col++) 
        {
            output[row][col] = 255 - image[row][col];
        }
    }
    
    writeImage("taskA.pgm", output, height, width);
}

void invertHalf(std::string input)
{
    int height = 0;
    int width = 0;
    int image[MAX_H][MAX_W];

    readImage(input, image, height, width);

    int output[MAX_H][MAX_W];

    for(int row = 0; row < height; row++) 
    {
        for(int col = (width/2); col < width; col++) 
        {
            output[row][col] = 255 - image[row][col];
        }
    }
    
    writeImage("taskB.pgm", output, height, width);
}