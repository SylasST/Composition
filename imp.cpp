#include <iostream>
#include "personalInfo.h"
#include <string>

using namespace std;


//DateType definition

void dateType::setDay(int d) {
	if (d >= 1 && d <= 31) 
		day = d;
	

}

void dateType::setMonth(int m) {
	if (m >= 1 && m <= 12)
		month = m;
}

void dateType::setYear(int y) {
	year = y;
}

int dateType::getDay()const{
	return day;
}

int dateType::getMonth() const {
	return month;
}

int dateType::getYear() const {
	return year;
}

void dateType::setDate(int d, int m, int y) {
	if (d >= 1 && d <= 31)
		day = d;
	if (m >= 1 && m <= 12)
		month = m;
	year = y;
}

void dateType::printDate()const {
	cout << day << " - " << month << " - " << year << endl;
}

dateType::dateType(int d, int m, int y) {
	if (d >= 1 && d <= 31)
		day = d;
	else
		day = 1;
	if (m >= 1 && m <= 12)
		month = m;
	else
		month = 1;
	year = y;
}

dateType::~dateType() {
	cout << "in dateType destructor: object destroyed!\n";
}


//PersonType Definition

void personType::setName(string first, string last) {
	firstName = first;
	lastName = last;
}

string personType::getFirstName() const{
	return firstName;
}

string personType::getLastName() const {
	return lastName;
}

void personType::print() const {
	cout << firstName << " " << lastName;
}

personType::personType(string first, string last) {
	firstName = first;
	lastName = last;
}

personType::~personType() {
	cout << "In personType destructor: goodbye object!\n";
}

//personalInfo definition


void personalInfo::setPersonalInfo(string f, string l, int d, int m, int y, int ID) {
	name.setName(f, l);
	bDay.setDate(d, m, y);
	personalID = ID;
}

void personalInfo::printPersonalInfo() const {
	cout << "The name: ";
	name.print();
	cout << endl<<"Date of Birth: ";
	bDay.printDate();
	cout << "The personal ID: ";
	cout << personalID << endl;


}

personalInfo::personalInfo(string f, string l, int d, int m, int y, int ID):name(f,l), bDay(d,m,y) {
	personalID = ID;
}

personalInfo::~personalInfo() {
	cout << "In personalInfo destructor: goodbye object!\n";
}