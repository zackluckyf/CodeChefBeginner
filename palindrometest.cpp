//
//  main.cpp
//  blockgame
//
//  Created by Zack Fanning on 8/25/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
int main(int argc, const char * argv[]) {
    //prompt user
    std::string line;
    std::cout << "Enter something: " << std::endl;
    std::getline(std::cin, line);
    //record length of string
    int length = line.size();
    int half = length / 2;
    bool palindrome = true;
    for (int n = 0; n < half + 1; n++)
    {
        if (line[n] != line[length - n - 1])
        {
            palindrome = false;
        }
    }
    if (palindrome == true)
    {
        std::cout << "You win you genius!" << std::endl;
    }
    else
    {
        std::cout << "You lose nerd" << std::endl;
    }
    return 0;
}
