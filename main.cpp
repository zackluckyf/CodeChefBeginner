//
//  main.cpp
//  newtest
//
//  Created by Zack Fanning on 8/25/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // initiallize variables
    int year(0), i(1);
    // get user input
    std::cout << "Enter a year between 1900 and 2500" << std::endl;
    // input variable
    std::cin >> year;
    // 1/1/1900 was a monday
    for(int j = 1900; j < year + 1; j++)
    {
        if (j % 400 == 0)
        {
            i+=2;
        }
        else if (j % 100 == 0)
        {
            //do nothing
        }
        else if (j % 4 == 0)
        {
            i+=2;
        }
        else
        {
            i++;
        }
    }
    int k = i % 7;
    std::string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    std::cout << day[k];
    std::cout << std::endl;
    return 0;
}
