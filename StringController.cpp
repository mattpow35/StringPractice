//
//  StringController.cpp
//  StringPractice
//
//  Created by Powley, Matthew on 2/2/17.
//  Copyright © 2017 Powley, Matthew. All rights reserved.
//

#include "StringController.hpp"
#include <iostream>
#include <string>

using namespace std;

void StringController :: start()
{
    
 
    getSize();
    
    // use the [] operator on a string.
    cout << "use the [] operator on a string" << endl;
    for (int i=0; i < firstName.length(); ++i)
    {
        cout << firstName[i] << endl;
    }
    
    useAt();
    useEmpty();
    useSubstr();
    useCompare();
}

void StringController :: getSize()
{
    long size = firstName.size();
    cout << "My first name is " << firstName << " and is " << size << " letters long."<< endl;
}

void StringController :: useAt()
{
    //gets the letter at the 4th position.
    char letter = middleName.at(4);
    cout << "using .at() the letter at the 4th position in my middle name is " << letter << endl;
}

void StringController :: useEmpty()
{
    bool isEmpty = lastName.empty();
    
    if(!isEmpty)
    {
        cout << "using .empty() my last name is not an empty string" << endl;
    }
}

void StringController :: useSubstr()
{
    string shortFirstName = firstName.substr(0,4);
    cout << "using substr the short version of my name is " << shortFirstName << endl;
    
    string restOfFirstName = firstName.substr(4);
    cout << "using substr again the rest of my name is " << restOfFirstName << endl;
}

void StringController :: useCompare()
{
    
}
