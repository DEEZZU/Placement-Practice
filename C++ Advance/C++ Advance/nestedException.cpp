//
//  nestedException.cpp
//  C++ Advance
//
//  Created by DEEPTI SHARMA on 02/07/18.
//  Copyright © 2018 DEEPTI SHARMA. All rights reserved.
//

#include <iostream>
using namespace std;

int main
()
{
    try {
            //throw 20;
            try
            {
                throw 20;
            }
            catch(int e)
            {
                cout << "\n Integer exception" << endl ;
                throw ;
            }
    }
    catch(...)
    {
        cout << "\n An unknown exception occured!!!!" << endl ;
    }
}

