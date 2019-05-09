/*Author: Adam Lyons
  Date: 2/19/2019
  Purpose: Implementation of billType.h
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "billType.h"

using namespace std;

// Prints the bill
void billType::printBill() const {
	cout << fixed << showpoint << setprecision(2);
	cout << "Pharmacy Charges: $" << pharmacyCharges << endl;
	cout << "Room Charges: $" << roomRent << endl;
	cout << "Doctor Fees: $" << doctorFee << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Total Charges: $" << pharmacyCharges + roomRent + doctorFee << endl;
}

//Sets the variables of the info
void billType::setInfo(string id, double phCharges, double rRent, double docFee) {
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;
}

// Sets the id
void billType::setID(string id) {
	ID = id;
}

// Gets the id
string billType::getID() {
	return ID;
}

//Sets the pharmacy charges
void billType::setPharmacyCharges(double charges) {
	pharmacyCharges = charges;
}

// Gets the pharmacy charges
double billType::getPharmacyCharges() {
	return pharmacyCharges;
}

// Updates the pharmacy charges
void billType::updatePharmacyCharges(double charges) {
	pharmacyCharges = pharmacyCharges + charges;
}

// Sets the room rent
void billType::setRoomRent(double charges) {
	roomRent = charges;
}

// gets the room rent
double billType::getRoomRent() {
	return roomRent;
}

// updates the room rent
void billType::updateRoomRent(double charges) {
	roomRent = roomRent + charges;
}

// sets the doctor fees
void billType::setDoctorFee(double charges) {
	doctorFee = charges;
}

// gets the docto fees
double billType::getDoctorFee() {
	return doctorFee;
}

// updates the doctor fees
void billType::updateDoctorFee(double charges) {
	doctorFee = doctorFee + charges;
}

// calculates the billing amount
double billType::billingAmount() {
	return pharmacyCharges + roomRent + doctorFee;
}

//constructor
billType::billType(string id, double phCharges, double rRent, double docFee) {
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;
}