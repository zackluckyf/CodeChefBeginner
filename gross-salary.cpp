//
//  main.cpp
//  gross-salary
//
//  Created by Zack Fanning on 8/26/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//
// This program will ask the user to input an amount of salaries and then tell them the gross pay for those
// salaries
#include <iostream>
#include <vector>
int main(int argc, const char * argv[]) {
    // initialize some variables
    int salaries(1);
    std::vector<double> dollars(1000);
    // user prompt
    std::cout << "Input how many salaries you want to check between 1 and 1,000 with salary \nbetween 1 and 100,000 \n";
    std::cin >> salaries;
    // boundary condition for number of salaries
    while (salaries > 1000 || salaries < 1)
    {
        std::cout << "Number of salaries must be between 1 and 1000, please input again. \n";
        std::cin >> salaries;
    }
    // user input amount of salaries + boundary condition in for loop
    std::cout << "Input salaries \n";
    for (int i = 0; i < salaries; i++)
    {
        std::cin >> dollars[i];
        if (dollars[i] < 1 || dollars[i] > 100000)
        {
            std::cout << "Salary must be between 1 and 100,000 please input again \n";
            i--;
        }
    }
    // calculate the gross salaries
    for (int j = 0; j < salaries; j++)
    {
        if(dollars[j] <= 1500)
        {
            dollars[j] = dollars[j] * 2;
        }
        else
        {
            dollars[j] = dollars[j] * 1.98 + 500;
        }
    }
    // output the gross salaries
    for (int k = 0; k < salaries; k++)
    {
        std::cout << dollars[k] << "\n";
    }
    return 0;
}





