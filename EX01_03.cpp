//
//  EX01_03.cpp
//  CS Review Final
//
//  Created by Joshua Miller on 11/13/16.
//  Copyright © 2016 Joshua Miller. All rights reserved.
//

#include "EX01_03.hpp"
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

EX03::EX03()
{
    
}

void EX03::ex03()
{
    
    //part 2a
    int aSquare;
    
    cout << " Please enter the area of a square\n";
    
    cin >> aSquare;
    
    int diag;
    
    diag = sqrt(2 * aSquare);
    
    cout << "\nThe diagonal of the square is " << diag << " units long\n";
    
    
    //part b
    
    char yn;
    
    cout << "Please enter y or n\n";
    
    cin >> yn;
    
    if (yn == 'y')
        
        cout << "Yes\n";
    
    else if (yn == 'n')
        cout << "No\n";
    
    else
        
    {
        
        cout << "Thats wrong :(\n";
        
    };
    
    //part c
    
    char tab;
    
    tab = '\t';
    
    //part 2d
    string mailingAddress;
    
    cout << "Please enter your mailing address\n";
    
    cin.ignore();
    
    getline(cin,mailingAddress);
    
    cout << "Your mailing address is " << mailingAddress << endl;
    
    //part2e
    
    string stringV = "";
    
}
