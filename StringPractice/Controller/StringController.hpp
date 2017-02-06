//
//  StringController.hpp
//  StringPractice
//
//  Created by Powley, Matthew on 2/2/17.
//  Copyright © 2017 Powley, Matthew. All rights reserved.
//

#ifndef StringController_hpp
#define StringController_hpp

#include <string>

using namespace std;

class StringController
{
public:
    void start();
private:
    string firstName = "Matthew";
    string middleName = "Edward";
    string lastName = "Powley";
    void getSize();
    void useAt();
    void useEmpty();
    void useSubstr();
    void useCompare();
    
    };

#endif /* StringController_hpp */
