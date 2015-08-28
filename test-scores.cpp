//
//  main.cpp
//  test-scores
//
//  Created by Zack Fanning on 8/27/15.
//  Copyright (c) 2015 Zackluckyf. All rights reserved.
//


#include <iostream>

const int SIZE = 30;
// max class size

void makeArray(int[], int&);
// make an array
// int[] - scores
// int& - number of students

void sortArray(int[], int);
// sort scores highest to lowest
// const int[] - scores
// int - number of students

void printArray(const int[], int);
// make an array
// const int[] - scores
// int - number of students

double averageScore(const int[], int);
// averages the score
// const int[] - scores
// int - number of students

void printAverage(double);
// prints the average
// double - the average

int main(int argc, const char * argv[])
{
    int scores[SIZE];
    int numStudents = 0;
    makeArray(scores, numStudents);
    sortArray(scores, numStudents);
    printArray(scores, numStudents);
    double average = averageScore(scores, numStudents);
    printAverage(average);
    return 0;
}

void makeArray(int array[], int& elements)
{
    int score;
    int i = 0;
    std::cout << "Enter students scores, enter -1 when finished\n";
    std::cin >> score;
    
    while ((score != -1) && (i < SIZE))
    {
        elements++;
        array[i] = score;
        i++;
        std::cin >> score;
    }
}

void sortArray(int array[], int elements)
{
    int j = 0;
    int temp = 0;
    for (int i = 0; i < elements; i++)
    {
        j = 0;
        while (array[j] >= array[j + 1])
        {
            j++;
            while (array[j] <= array[j + 1] && (j + 1) < elements)
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                j++;
            }
        }
        while (array[j] <= array[j + 1] && (j + 1) < elements)
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j++;
        }

    }
}

void printArray(const int array[], int elements)
{
    std::cout << "The scores from highest to lowest are: ";
    for (int i = 0; i < elements; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

double averageScore(const int array[], int elements)
{
    double total = 0.0;
    for (int i = 0; i < elements; i++)
    {
        total += array[i];
    }
    double average = total / elements;
    return average;
}

void printAverage(double average)
{
    std::cout << "The average score on the test was: " << average << "\n";
}






