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
    
    int intArray [4];
    double doubleArray [4];
    
    intArray[0] = 35;
    doubleArray[0] = 3.14;
    
}
//test the get size on strings
void StringController :: getSize()
{
    long size = firstName.size();
    cout << "My first name is " << firstName << " and is " << size << " letters long."<< endl;
}
// test the at method on strings
void StringController :: useAt()
{
    //gets the letter at the 4th position.
    char letter = middleName.at(4);
    cout << "using .at() the letter at the 4th position in my middle name is " << letter << endl;
}
// test the empty method on strings
void StringController :: useEmpty()
{
    bool isEmpty = lastName.empty();
    
    if(!isEmpty)
    {
        cout << "using .empty() my last name is not an empty string" << endl;
    }
}
// test the substring method on strings
void StringController :: useSubstr()
{
    string shortFirstName = firstName.substr(0,4);
    cout << "using substr the short version of my name is " << shortFirstName << endl;
    
    string restOfFirstName = firstName.substr(4);
    cout << "using substr again the rest of my name is " << restOfFirstName << endl;
}
// test the compare method on strings
void StringController :: useCompare()
{
    if (firstName.compare(lastName) != 0)
    {
        cout << "my first name is " << firstName << " and is not my last name " << lastName << endl;
    }
}
