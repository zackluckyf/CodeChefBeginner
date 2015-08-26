//
//  main.cpp
//  small-factorials
//
//  Created by Zack Fanning on 8/26/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//
// Calculates factorials for numbers between 1 and 100
#include <iostream>
#include <vector>
int main(int argc, const char * argv[]) {
    // intialize variables
    std::vector<int> factorials(100);
    int numberFactorials;
    // user input number of factorials
    std::cout << "Input the number of factorials \n";
    std::cin >> numberFactorials;
    // boundary condition
    while (numberFactorials < 1 || numberFactorials > 100)
    {
        std::cout << "Number of factorials must be between 1 \nand 100 input the number of factorials \n";
        std::cin >> numberFactorials;
    }
    // user input base numbers for factorials
    std::cout << "Enter the base numbers \n";
    for (int i = 0; i < numberFactorials; i++)
    {
        std::cin >> factorials[i];
        if (factorials[i] > 100 || factorials[i] < 1)
        {
            std::cout << "Base number must be between 1 and 100, please re-enter.\n";
            i--;
        }
    }
    for (int j = 0; j < numberFactorials; j++)
    {
        int temp = factorials[j];
        int newFactorial = temp;
        while (temp > 1)
        {
            newFactorial = newFactorial * (temp - 1);
            temp--;
        }
        factorials[j] = newFactorial;
        std::cout << factorials[j] << "\n";
    }
    
    return 0;
}
