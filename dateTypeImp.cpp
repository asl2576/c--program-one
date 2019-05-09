/*Author: Adam Lyons
  Date: 2/19/2019
  Purpose: Implementation of dateType.h
 */
 
#include <iostream>
#include "dateType.h" 

using namespace std;

// sets the date
void dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}
 
// gets the day
int dateType::getDay() const 
{
    return dDay;
}

// gets the month
int dateType::getMonth() const 
{
    return dMonth;
}

// gets the year
int dateType::getYear() const 
{
    return dYear;
}

// prints out the date
void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

    //Constructor with parameters
dateType::dateType(int month, int day, int year) 
{ 
    dMonth = month;
    dDay = day;
    dYear = year;
}
