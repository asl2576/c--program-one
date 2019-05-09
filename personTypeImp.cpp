
//**********************************************************
// Author: D.S. Malik
// 
// Implementation file personTypeImp.cpp
// This file contains the definitions of the functions to 
// implement the operations of the class personType.
//**********************************************************
  
#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

// prints out the first and last name
void personType::print() const
{
    cout << firstName << " " << lastName;
} 

// sets the first and last name
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

// gets the first name
string personType::getFirstName() const
{
    return firstName;
}

// gets the last name
string personType::getLastName() const
{
    return lastName;
}

//constructor
personType::personType(string first, string last) 
{ 
    firstName = first;
    lastName = last;
}
