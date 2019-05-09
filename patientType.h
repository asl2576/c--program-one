/*Author: Adam Lyons
  Date: 2/19/2019
  Purpose: This class contains information to implement a patient's information
 */
#ifndef H_patientType
#define H_patientType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

class patientType: public personType
{
public:
    void print() const;				// prints the information

    void setInfo(string id = "", string fName = "", string lName = "",		// sets the information
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);

    void setID(string id);			// sets the id
    string getID();					// gets the id

    void setBirthDate(int bDay = 1, int bMth = 1, int bYear = 1900);	// sets the birthdate
    int getBirthDay();		// gets the birth day
    int getBirthMonth();	// gets the birth month
    int getBirthYear();		// gets the birth year

    void setDoctorName(string fName = "", string lName = "");	// sets the doctor's name
    void setDoctorSpl(string spl = "");			// sets the doctor's specialty
    string getDoctorFName();					// gets the doctor's first name
    string getDoctorLName();					// gets the doctor's last name

    string getDoctorSpl();						// gets the doctor's specialty

    void setAdmDate(int admDay = 1, int admMth = 1, int admYear = 1900);	// sets the admission date
    int getAdmDay();		// gets the admission day
    int getAdmMonth();		// gets the admission month
    int getAdmYear();		// gets the admission year

    void setDisDate(int disDay = 1, int disMth = 1, int disYear = 1900);	// sets the discharge date
    int getDisDay();		// gets the discharge day
    int getDisMonth();		// gets the discharge month
    int getDisYear();		// gets the discharge year

    patientType(string id = "", string fName = "", string lName = "",	// constructor
                int bDay = 1, int bMth = 1, int bYear = 1900,
                string docFrName = "", string docLaName = "", string docSpl = "",
                int admDay = 1, int admMth = 1, int admYear = 1900,
                int disChDay = 1, int disChMth = 1, int disChYear = 1900);
   
 private:
    string ID;						// variable to hold the id
    dateType dateOfBirth;			// vararble to hold the date of birth
    doctorType attendingPhysicain;	// variable to hold the name of the attending physician
    dateType admitDate;				// varaible to hold to admission date
    dateType dischargeDate;			// variable to hold te discharge date
};

#endif
