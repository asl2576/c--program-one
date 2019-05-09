/*Author: Adam Lyons
  Date: 2/19/2019
  Purpose: This class contains the members to implement a doctor's information
 */
#ifndef H_doctorType
#define H_doctorType

#include <string>
#include "personType.h"
 
using namespace std;

class doctorType: public personType
{
public:
    void print() const;					// prints the information
    void setSpeciality(string spl);		// sets the specialty
    string getSpeciality();				// getst he speciality
 
    doctorType(string first = "", string last = "", string spl = "");	// constructor

 private:
    string speciality;					// variable to hold the doctor's specialty
};

#endif
