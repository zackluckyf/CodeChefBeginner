//
//  main.cpp
//  test-scores2
//
//  Created by Zack Fanning on 8/28/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void fillArray(int[ROWS][COLS]);
// fills a 3x3 array
// int[][] - the array

void printArray(int[ROWS][COLS]);
// prints a 3x3 array
// int[][] - the array


int main(int argc, const char * argv[]) {
   
    int scores[ROWS][COLS];
    fillArray(scores);
    printArray(scores);
    
    return 0;
}

void fillArray(int array[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        std::cout << "Enter the scores of test #" << i + 1 << ": ";
        for (int j = 0; j < COLS; j++)
        {
            int scores;
            std::cin >> scores;
            array[i][j] = scores;
        }
    }
}

void printArray(int array[ROWS][COLS])
{
    for (int i = 0; i < COLS; i++)
    {
        std::cout << "\nThe scores of student " << i + 1 << " are: ";
        for (int j = 0; j < ROWS; j++)
        {
            std::cout << array[j][i] << " ";
        }
    }
    std::cout << "\n";
}

