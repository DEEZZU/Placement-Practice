//
//  GenericException.cpp
//  C++ Advance
//
//  Created by DEEPTI SHARMA on 02/07/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <exception>
using namespace std;

int main()
{
    
    try
    {
        throw 20;
    }
    catch(int e)
    {
        cout << " Caught integer exception";
        cout << endl ;
    }
    catch(...)
    {
        cout << "\n Caught an unknown exception ";
        cout << endl ;
    }
    
    try
    {
        throw true;
    }
    catch(int e)
    {
        cout << " Caught integer exception";
        cout << endl ;
    }
    catch(...)
    {
        cout << "\n Caught an unknown exception ";
        cout << endl ;
    }
}
