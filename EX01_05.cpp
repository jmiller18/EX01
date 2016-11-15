//
//  EX01_05.cpp
//  CS Review Final
//
//  Created by Joshua Miller on 11/13/16.
//  Copyright © 2016 Joshua Miller. All rights reserved.
//

#include "EX01_05.hpp"
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

EX05::EX05()
{
    
}

void EX05::size1(int arrayNum[], int arraySize)

{
    
    //for part 4c
    
    for (int counter = 0; counter < arraySize; counter++)
        
    {
        
        cout << arrayNum[counter] << endl;
    }
    
}

void EX05::size2(int arrayNum[], int arraySize)

{
    
    //for part 4d
    
    int arrayContains = 0;
    
    int query;
    
    cout << "please enter a number to check for in the array\n";
    
    cin >> query;
    
    for (int counter = 0; counter < 5; counter++)
        
    {
        if (arrayNum[counter] == query)
            
            arrayContains = 1;
        
    }
    
    if (arrayContains == 1)
        
        cout<< "The array contains your number\n";
    
    else
        
        cout << "The array does not contain your number\n";
    
}

void EX05::ex05()
{
    
    //part 4a
    int array1[5];
    
    int numero;
    
    for (int counter = 0; counter < 5; counter++)
        
    {
        int value = counter + 1;
        
        cout << "please enter value " << value << endl;
        
        cin >> numero;
        
        array1[counter] = numero;
        
    }
    
    //part4b
    
    int sum = 0;
    
    for (int counter = 0; counter < 5; counter++)
        
    {
        
        sum = sum + array1[counter];
        
    }
    
    cout << "the sum of those numbers is " << sum << endl;
    
    int product = 1;
    
    for (int counter = 0; counter < 5; counter++)
        
    {
        
        product= product * array1[counter];
        
    }
    
    cout << "the product of those numbers is " << product << endl;
    
    //part 4c
    
    size1(array1, sizeof(array1)/sizeof(int));
    
    //part 4d
    size2(array1, sizeof(array1) / sizeof(int));
    
}


