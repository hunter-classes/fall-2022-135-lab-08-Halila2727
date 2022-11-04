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
        for(int col = 0; col < width; col++) 
        {
            if(col >= width/2)
            {
                output[row][col] = 255 - image[row][col];
            }
            else
            {
                output[row][col] = image[row][col];
            }
        }
    }
    
    writeImage("taskB.pgm", output, height, width);
}

void box(std::string input)
{
    int height = 0;
    int width = 0;
    int image[MAX_H][MAX_W];

    readImage(input, image, height, width);

    int startH = height/2;
    startH /= 2;

    int startW = width/2;
    startW /= 2;

    int output[MAX_H][MAX_W];
    

    for(int row = 0; row < height; row++) 
    {
        for(int col = 0; col < width; col++) 
        {
            output[row][col] = image[row][col];
        }
    }

    for(int row = startH; row < startH*3; row++) 
    {
        for(int col = startW; col < startW*3; col++) 
        {
            output[row][col] = 255;
        }
    }
    
    writeImage("taskC.pgm", output, height, width);
}

void frame(std::string input)
{
    int height = 0;
    int width = 0;
    int image[MAX_H][MAX_W];

    readImage(input, image, height, width);

    int startH = height/2;
    startH /= 2;

    int startW = width/2;
    startW /= 2;

    int output[MAX_H][MAX_W];
    

    for(int row = 0; row < height; row++) 
    {
        for(int col = 0; col < width; col++) 
        {
            output[row][col] = image[row][col];

            if(col == startW || col == startW*3)
            {
                for(int row = startH; row < startH*3; row++) 
                {
                    output[row][col] = 255;
                }
            }
        }

        if(row == startH || row == startH*3)
        {
            for(int col = startW; col < startW*3; col++) 
            {
                output[row][col] = 255;
            }
        }
    }
    
    writeImage("taskD.pgm", output, height, width);    
}

void doubleScale(std::string input)
{
    int height = 0;
    int width = 0;
    int image[MAX_H][MAX_W];

    readImage(input, image, height, width);

    int output[MAX_H][MAX_W];

    for(int row = 0; row < height*2; row++) 
    {
        for(int col = 0; col < width*2; col++) 
        {
            output[row][col] = image[row/2][col/2];
        }
    }
    
    writeImage("taskE.pgm", output, height*2, width*2);
}

void pixelate(std::string input)
{
    int height = 0;
    int width = 0;
    int image[MAX_H][MAX_W];
    int average = 0;

    readImage(input, image, height, width);

    int output[MAX_H][MAX_W];

    for(int row = 0; row < height; row = row+2)
    {
        for(int col = 0; col < width; col=col+2)
        {
            average = (image[row][col] + image[row + 1][col] 
                + image[row][col + 1] + image[row + 1][col + 1]) / 4;
            output[row][col] = average;
            output[row + 1][col] = average;
            output[row][col + 1] = average;
            output[row + 1][col + 1] = average;
        }
    }
    
    writeImage("taskF.pgm", output, height, width);
}