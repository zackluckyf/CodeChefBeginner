//
//  main.cpp
//  length-area-volume
//
//  Created by Zack Fanning on 9/1/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <vector>

double lengthAreaVolume(std::vector <double>&);

int dimension(int&);

void dimensionValues(std::vector <double>&, int size);

int main(int argc, const char * argv[]) {
    
    int sides;
    int dimensions = dimension(sides);
    std::vector <double> dimension(3, 1.0);
    dimensionValues(dimension, dimensions);
    if (dimensions == 1)
    {
    std::cout << "The total length is " <<lengthAreaVolume(dimension);
    }
    else if (dimensions == 2)
    {
        std::cout << "The total area is " <<lengthAreaVolume(dimension);
    }
    else if (dimensions == 3)
    {
        std::cout << "The total volume is " <<lengthAreaVolume(dimension);
    }
    return 0;
}

double lengthAreaVolume(std::vector <double>& dimension)
{
    double total = 1.0;
    for (int i = 0; i < dimension.size(); i++)
    {
        total *= dimension[i];
    }
    return total;
}

int dimension(int& dimensions)
{
    int sides;
    std::cout << "How many dimensions is your object? ";
    std::cin >> sides;
    dimensions = sides;
    return dimensions;
}

void dimensionValues(std::vector <double>& dimension, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the size of the " << i + 1 << " side ";
        double side;
        std::cin >> side;
        dimension.push_back(side);
    }
}






