/*Author: Adam Lyons
  Date: 2/19/2019
  Purpose: Implementation of doctorType.h
 */

#include <iostream>
#include <string>
#include "doctorType.h" 


using namespace std;

//prints out the information
void doctorType::print() const{
	personType::print();
	cout << "  " << speciality;
}

//set specialty
void doctorType::setSpeciality(string spl) {
	speciality = spl;
}

//gets specialty
string doctorType::getSpeciality() {
	return speciality;
}
	
// constructor
doctorType::doctorType(string first, string last, string spl) {
	personType(first, last);
}