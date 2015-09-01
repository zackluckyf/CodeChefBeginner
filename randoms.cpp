//
//  main.cpp
//  random-practice
//
//  Created by Zack Fanning on 9/1/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <string>

int main(int argc, const char * argv[]) {
    srand(time(0));
    int numRand;
    unsigned int output = rand() % 100 + 1;
    std::cout << "Random numbers range from 1 to 100 \n";
    std::cout << "How many random numbers do you need? ";
    std::cin >> numRand;
    
    for(int i = 0; i < numRand; i++)
    {
        std::cout << output << " ";
        output = rand() % 100 + 1;
    }
    std::cout << "\n";
    std::string answer = "yes";
    std::cout << "Do you need more random numbers? ";
    std::cin >> answer;
    while (answer == "yes" || answer == "Yes" || answer == "YES")
    {
        std::cout << "How many random numbers(between 1-100) do you need? ";
        std::cin >> numRand;
    
    for(int i = 0; i < numRand; i++)
        {
            std::cout << output << " ";
            output = rand() % 100 + 1;
        }
        std::cout << "\n";
        std::cout << "Do you need more random numbers? ";
        std::cin >> answer;
    }
    std::cout << "I hope I was helpful!";
    return 0;
}
