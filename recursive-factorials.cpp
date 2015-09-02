//
//  main.cpp
//  factorials
//
//  Created by Zack Fanning on 9/2/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

int factorial(int x);

int main(int argc, const char * argv[]) {
    int x;
    std::cout << "Enter a number(between 0 and 12) to get it's factorial: ";
    std::cin >> x;
    int y = factorial(x);
    std::cout << y;
    return 0;
}

int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}