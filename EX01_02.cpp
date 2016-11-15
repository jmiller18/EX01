//
//  EX01_02.cpp
//  CS Review Final
//
//  Created by Joshua Miller on 11/13/16.
//  Copyright © 2016 Joshua Miller. All rights reserved.
//

#include "EX01_02.hpp"
#include <iostream>

using namespace std;

EX02::EX02()
{
    
}

void EX02::ex02()

{
    int bookwidth;
    int boxWidth;
    
    //part 1a
    
    bool hasPassedTest = true;
    
    //part 1b
    
    int x = rand() % 100;
    
    int y = rand() % 100;
    
    if (x >= y)
    {
        
        cout << "x is greater than or equal to y\n";
        
    }
    else
        
        cout << "x is less than y\n";
    
    //part 1c
    
    cout << "please enter the Number of shares\n";
    
    int numberofShares;
    
    cin >> numberofShares;
    
    if (numberofShares < 100)
        
        cout << "you have less than 100 shares\n";
    
    else
        
        cout << "you have more than 100 shares\n";
    
    //part 1d
    
    cout << "please enter box width\n";
    
    cin >> boxWidth;
    
    cout << "\nplease enter book width\n";
    cin >> bookwidth;
    
    if (boxWidth % bookwidth == 0 || bookwidth % boxWidth == 0)
    {
        
        cout << "\nThe widths are evenly divible\n";
        
    }
    
    else
        
        cout << "\nThey are not divisible\n";
    
    //part 1e
    
    cout << "please enter the shelf life of the chocolate: ";
    
    int chocLife;
    
    cin >> chocLife;
    
    cout << "\nplease enter outside temperature in Farenheit: ";
    
    int temperature;
    
    cin >> temperature;
    if (temperature > 90)
    {
        chocLife = chocLife - 4;
        
        cout << "\nthe shelf life of the chocloate is now " << chocLife << endl;
    }
    
    else
        cout << "\nthe shelf life of the chocloate is still " << chocLife << endl;
}
