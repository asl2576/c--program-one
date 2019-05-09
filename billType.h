/*Author: Adam Lyons
 Date: 2/19/2019
 Purpose: This class contains the members to implement various charges to patients
*/
#ifndef H_BillType
#define H_BillType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

class billType
{
public:
    void printBill() const;	// Function to print out the charges

    void setInfo(string id = "", double phCharges = 0, double rRent = 0,	// Function to set the id, the charges, rent
                 double docFee = 0);										// and doctor's fee

    void setID(string id);	// sets the id
    string getID();			// gets the id

    void setPharmacyCharges(double charges = 0);	// Sets the pharmacy charges
    double getPharmacyCharges();					// Gets the pharmacy charges
    void updatePharmacyCharges(double charges = 0);	// Update the phrmacy charges by adding the other charges

    void setRoomRent(double charges = 0);		// Sets the rent
    double getRoomRent();						// Gets the rent
    void updateRoomRent(double charges = 0);	// Updates the rent by adding other charges

    void setDoctorFee(double charges = 0);		// Sets the doctor fees
    double getDoctorFee();						// Gets the doctor fees
    void updateDoctorFee(double charges = 0);	// Updates the doctor fees by adding other charges

    double billingAmount();		// Calculates the total billing amount

    billType(string id = "", double phCharges = 0, double rRent = 0, double docFee = 0);	// Constructor

 private:
    string ID;					// String variable to hold ID
    double pharmacyCharges;		// Double variable to hold pharmacy charges
    double roomRent;			// Double variable to hold room rent charges
    double doctorFee;			// Double variable to hold doctor fees
};

#endif
