/*Author: Adam Lyons
  Date: 2/19/2019
  Purpose: Implementation of patientType
 */
#include <iostream>
#include <string>
#include <iomanip>
#include "patientType.h"
 
using namespace std;

// prints out the patient information
void patientType::print() const
{
    cout << "Patient: ";
    personType::print();
    cout << endl;

    cout << "Attending Physician: ";
    attendingPhysicain.print();
    cout  << endl;
     
    cout << "Admit Date: ";
    admitDate.printDate();
    cout << endl;
    cout << "Discharge Date: "; 
    dischargeDate.printDate();
    cout << endl << endl;
}

// sets the info
void patientType::setInfo(string id, string fName, string lName, 
                         int bDay, int bMth, int bYear,
                         string docFrName,
                         string docLaName, string docSpl,
                         int admDay, int admMth, int admYear,
                         int disChDay, int disChMth, int disChYear)
{
    ID = id;
    setName(fName, lName);
    dateOfBirth.setDate(bDay, bMth, bYear);
    attendingPhysicain.setName(docFrName, docLaName);
    attendingPhysicain.setSpeciality(docSpl);
    admitDate.setDate(admDay, admMth, admYear);
    dischargeDate.setDate(disChDay, disChMth, disChYear);
}

// sets the patient id
void patientType::setID(string id)
{
    ID = id;
}

// gets the patient id
string patientType::getID()
{
    return ID;
}

// sets the patient's birthdate
void patientType::setBirthDate(int bDay, int bMth, int bYear)
{
    dateOfBirth.setDate(bDay, bMth, bYear);
}

// gets the patient's birthday
int patientType::getBirthDay()
{
    return dateOfBirth.getDay();
}

// gets the birthmonth
int patientType::getBirthMonth()
{
    return dateOfBirth.getMonth();
}

// gets the birth year
int patientType::getBirthYear()
{
    return dateOfBirth.getYear();
}

// sets the doctor's name
void patientType::setDoctorName(string fName, string lName)
{
    attendingPhysicain.setName(fName, lName);
}
    
// sets the doctor's specialty
void patientType::setDoctorSpl(string spl)
{
    attendingPhysicain.setSpeciality(spl);
}
  
// gets the doctors first name
string patientType::getDoctorFName()
{
    return attendingPhysicain.getFirstName();
}

// gets the doctor's last name
string patientType::getDoctorLName()
{
    return attendingPhysicain.getLastName();
}

// gets the doctor's specialty
string patientType::getDoctorSpl()
{
    return attendingPhysicain.getSpeciality();
}

// sets the admission date
void patientType::setAdmDate(int admDay, int admMth, int admYear)
{
    admitDate.setDate(admDay, admMth, admYear);
}

// gets the admission day
int patientType::getAdmDay()
{
    return admitDate.getDay();
}

// gets the admission month
int patientType::getAdmMonth()
{
    return admitDate.getMonth();
}

// gets the admission year
int patientType::getAdmYear()
{
    return admitDate.getYear();
}

//sets the discharge date
void patientType::setDisDate(int disDay, int disMth, int disYear)
{
    dischargeDate.setDate(disDay, disMth, disYear);
}

// gets discharge day
int patientType::getDisDay()
{
    return dischargeDate.getDay();
}

// gets discharge month
int patientType::getDisMonth()
{
    return dischargeDate.getMonth();
}

// gets discharge year
int patientType::getDisYear()
{
    return dischargeDate.getYear();
}

//constructor
patientType::patientType(string id, string fName, string lName, 
                         int bDay, int bMth, int bYear,
                         string docFrName, string docLaName, string docSpl,
                         int admDay, int admMth, int admYear,
                         int disChDay, int disChMth, int disChYear)
                   : personType(fName, lName), 
                     dateOfBirth(bDay, bMth, bYear),
                     attendingPhysicain(docFrName, docLaName, docSpl), 
                     admitDate(admDay, admMth, admYear), 
                     dischargeDate(disChDay, disChMth, disChYear)
{
    ID = id;
}
