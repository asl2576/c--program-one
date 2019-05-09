/*Author: Adam Lyons
  Date: 2/19/2019
  Purpose: To add multiple pieces of information such as patient and doctor names, and dates of admission and
  to print them out
 */
#include <iostream>
#include <string>
#include "patientType.h"
#include "personType.h"
#include "billType.h"
#include "dateType.h"
#include "doctorType.h"

using namespace std;

int main() {
	patientType newPatient;		// Created a new object using the class patientType
	billType bill;		// Created a new object using the class billType

	string id, First, Last, spl;	// Declaring string variables

	// Takes the patient's id from user
	cout << "Enter patient's ID: ";
	cin >> id;
	cout << endl;
	
	// Takes patient's first name from user
	cout << "Enter patient's first name: ";
	cin >> First;
	cout << endl;

	// Takes patient's last name from user
	cout << "Enter patient's last name: ";
	cin >> Last;
	cout << endl;


	newPatient.setID(id);	// Setting the patient id
	bill.setID(id);	// Setting the bill id

	newPatient.setName(First, Last);	// Setting the name of the patient

	// Takes the doctor's first name from user
	cout << "Enter doctor's first name: ";
	cin >> First;
	cout << endl;

	// Takes the doctor's last name from user
	cout << "Enter doctor's last name: ";
	cin >> Last;
	cout << endl;

	newPatient.setDoctorName(First, Last);	// Setting the name of the Doctor

	// Takes the doctor's speciality from the user
	cout << "Enter doctor's specialty: ";
	cin >> spl;
	cout << endl;

	newPatient.setDoctorSpl(spl);	// Setting the doctor's specialty

	newPatient.setAdmDate(1, 15, 2019);	// Setting the patient's admission date
	newPatient.setDisDate(2, 15, 2019);	// Setting the patient's discharge date

	bill.setPharmacyCharges(1500.98);	// Setting the pharmacy charges
	bill.setRoomRent(50000);			// Setting the room rent
	bill.setDoctorFee(150999);			// Setting the doctor's fees

	newPatient.print();		// prints the information from patientType
	bill.printBill();		// prints the information from billType
	
	cout << "Press any key to continue...";
	cin;
	system("pause");
    return 0;
}
