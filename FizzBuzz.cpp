//
//  main.cpp
//  FizzBuzz
//
//  Created by Zack Fanning on 8/31/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

/* 
    Write a program that prints the numbers from 1 to 100. But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”
*/





#include <iostream>
#include <vector>

void fillVector(std::vector <int> &);

void printVector(std::vector <int> &);

int main(int argc, const char * argv[]) {
    
    std::vector <int> myNum;
    
    fillVector(myNum);
    printVector(myNum);
    
    return 0;
}

void fillVector(std::vector <int> & newNum)
{
    for (int i = 0; i < 100; i++)
    {
        newNum.push_back(i+1);
    }
}

void printVector(std::vector <int> & newNum)
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 15 == 0)
        {
            std::cout << "FizzBuzz ";
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz ";
        }
        else if (i % 5 ==0)
        {
            std::cout << "Buzz ";
        }
        else
        {
            std::cout << i << " ";
        }

    }
}