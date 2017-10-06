//
//  main.cpp
//  PRG-2-14-Personal-Information
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that displays the following pieces of information, each on a separate line:
//  Your name
//  Your address, with city, state, and ZIP code
//  Your telephone number
//  Your college major
//
//  Use only a single cout statement to display all of this information.

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // Declare constants
    const string STR_NAME = "Keith B. Smith";
    const string STR_ADDRESS = "REDACTED";
    const string STR_TELEPHONE_NUMBER = "REDACTED";
    const string STR_MAJOR = "Computer Science";
    
    // Format and output to console
    cout << STR_NAME << endl
         << STR_ADDRESS << endl
         << STR_TELEPHONE_NUMBER << endl
         << STR_MAJOR << endl;
    
    return 0;
}
