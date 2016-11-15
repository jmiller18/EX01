//
//  EX01_04.cpp
//  CS Review Final
//
//  Created by Joshua Miller on 11/13/16.
//  Copyright © 2016 Joshua Miller. All rights reserved.
//

#include "EX01_04.hpp"
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

EX04::EX04()
{
    
}

int EX04::separate(int doble)

{
    
    //for part 3e
    
    doble = doble * 2;
    
    cout << doble << endl;
    
    return doble;
    
}

int EX04::adder(int rand1, int rand2)

{
    
    //for part 3f
    
    int summer = rand1 + rand2;
    
    return summer;
}

int EX04::passby(int &x)

{
    
    //for part 3g
    
    x = x + 1;
    
    return 0;
    
}
void EX04::ex04()

{
    
    //part3a
    
    int num; //special number
    
    do
        
    {
        cout << "please enter a number between 1 and 10\n";
        
        cin >> num;
        
    } while (num < 0 || num>10);
    
    //part 3b
    
    int sum = 0;
    
    
    for (int count=0; count <= num; count++)\
        
    {
        
        sum = pow(count, 3)+sum;
        
    }
    
    cout << "sum of cubes = " << sum << endl;
    
    //part3c
    
    int cont = 0;
    
    do
        
    {
        cout << "*";
        
        cont++;
        
    } while (cont < num);
    
    cout << endl;
    
    //part 3d
    
    for (int c0unt = 0; c0unt <= 40; c0unt = c0unt + 2)
        
        cout << c0unt << endl;
    
    //part 3e
    
    cout << "2 times " << num << " is ";
    
    separate(num);
    
    //part 3f
    
    
    int xx = rand() % 100;
    
    int yy = rand() % 100;
    int adderVal = adder(xx, yy);
    
    cout << "the sum of 2 random numbers is " << adderVal << endl;
    
    //part 3g
    
    int integerVal = 0;
    
    passby(integerVal);
    
    cout << integerVal<< endl;
    
}

