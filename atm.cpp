//
//  main.cpp
//  atm
//
//  Created by Zack Fanning on 8/26/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    // program that lets a user input a balance and withdrawal and then checks if the withdrawal is a multiple of 5, assesses a .50 cent penalty and then tells the new balance
    int withdrawal(0);
    double balance(0.0);
    // user prompts
    std::cout << "Input the withdrawal amount\n";
    std::cin >> withdrawal;
    std::cout << "Input the balance\n";
    std::cin >> balance;
    // checks for multiple of 5
    if (withdrawal % 5 != 0)
    {
        std::cout << std::setprecision(2) << std::fixed << balance << "\n";
    }
    // checks if the balance is big enough
    else if (balance - withdrawal > .5)
    {
        std::cout << std::setprecision(2) << std::fixed << balance - withdrawal - .5 << "\n";
    }
    // if the balance isn't big enough
    else
    {
        std::cout << std::setprecision(2) << std::fixed << balance << "\n";
    }
    
    return 0;
}
