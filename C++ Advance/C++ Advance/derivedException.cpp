//
//  derivedException.cpp
//  C++ Advance
//
//  Created by DEEPTI SHARMA on 02/07/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <exception>
using namespace std;

class derivedException : public exception
{
    
    virtual const char* what() const throw()
    {
        return "My derived exception";
    }
};

int main()
{
 
    derivedException E;
    
    try
    {
        throw E;
    }
    catch(exception& e) // its the base class pointer to the derived class so it uses its function had it been simple object it would not have called derived's function
    {
        cout << e.what() << endl ;
    }
    
    return 1;
}
