//
//  main.cpp
//  menu-items
//
//  Created by Zack Fanning on 8/26/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//  Checks money the buyer Tonya has of up to 5 amounts and then calculates the minimum number of items she
//  can buy off the menu to reach her amount. Prices are 2^i 0 <= i <= 11


#include <iostream>
#include <cmath>
#include <vector>
int main(int argc, const char * argv[]) {
    int menuItems(0), amounts(0), amount(0);
    std::vector<int> money;
    std::cout << "How many amounts does Tonya have?\n";
    std::cin >> amounts;
    while (amounts > 5)
    {
        std::cout << "Tonya can't have more than 5 amounts how many amounts does Tonya have?\n";
        std::cin >> amounts;
    }
    std::cout << "How much does Tonya have?\n";
    for(int i = 0; i < amounts; i++)
    {
        std::cin >> amount;
        money.push_back (amount);
    }
    for (int j = 0; j < amounts; j++)
    {
        for (double i = 11.0; i >= 0.0; i--)
        {
            // have to correct for doubles not being exact
            if (money[j] + .01 > pow(2.0, i))
            {
                money[j] = money[j] - pow(2.0, i);
                menuItems++;
                if (money[j] + .01 > pow(2.0, i))
                {
                    i++;
                }
            }
        }
        std::cout << menuItems << "\n";
        menuItems = 0;
    }
    return 0;
}
