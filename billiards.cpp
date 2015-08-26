//
//  main.cpp
//  billiards
//
//  Created by Zack Fanning on 8/26/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//
//  Checks who won each round of pool and then checks for the higher score. Biggest individual round
//  winner is overall winner. finishes with a print of winner one or two and prints the score won by

#include <iostream>
#include <vector>
int main(int argc, const char * argv[]) {
    // variable intialization
    int rounds(0), input1(0), input2(0), winner1(0), winner2(0), temp1(0), temp2(0), final1(0), final2(0);
    // user prompts
    std::cout << "How many rounds played?\n";
    std::cin >> rounds;
    std::cout << "Enter the scores with score 1 space score 2 and then enter for each round\n";
    // checks values to determine round winner and win magnitude
    for (int i = 0; i < rounds; i++)
    {
        std::cin >> input1 >> input2;
        if (input1 > input2)
        {
            winner1 = input1 - input2;
            temp1 = winner1;
        }
        else
        {
            winner2 = input2 - input1;
            temp2 = winner2;
        }
        if (temp1 > final1)
        {
            final1 = temp1;
        }
        if (temp2 > final2)
        {
            final2 = temp2;
        }
    }
    // checks if player 1 won
    if (final1 > final2)
    {
        std::cout << 1 << " " << final1 << "\n";
    }
    // if player 2 won
    else
    {
        std::cout << 2 << " " << final2 << "\n";
    }
    
    return 0;
}
