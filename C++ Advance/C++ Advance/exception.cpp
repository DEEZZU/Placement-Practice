//
//  exception.cpp
//  C++ Advance
//
//  Created by DEEPTI SHARMA on 02/07/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int number=6;
    
    try {
        throw number;
    }
    catch (int e) {
        cout << "\n Thrown an exception : " << to_string(e) << endl ;
    }
}
