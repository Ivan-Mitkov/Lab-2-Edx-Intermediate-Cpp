#include "Student.h"
#include <iostream>
Student::Student()
{
	this->grade = 0.0;
}

Student::Student(std::string firstName, std::string lastName, std::string city, std::string address, std::string phone, int age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->city = city;
	this->address = address;
	this->phone = phone;
	this->age = age;
	this->grade = 0;
	
}

Student::~Student()
{
}

std::string Student::getFirstName()
{
	return this->firstName;
}

std::string Student::getLastName()
{
	return this->lastName;
}

std::string Student::getCity()
{
	return this->city;
}

std::string Student::getAddress()
{
	return this->address;
}

std::string Student::getPhone()
{
	return this->phone;
}

int Student::getAge()
{
	return this->age;
}

void Student::setFirstName(std::string fn)
{
	this->firstName = fn;
}

void Student::setLastName(std::string ln)
{
	this->lastName = ln;
}

void Student::setCity(std::string c)
{
	this->city = c;
}

void Student::setAddress(std::string a)
{
	this->address = a;
}

void Student::setPhone(std::string ph)
{
	this->phone = ph;
}

void Student::setAge(int age)
{
	this->age = age;
}

bool Student::setGrade(double grade)
{
	
		this->grade = grade;
	
	return true;
}

void Student::SitInClass()
{
	std::cout << "Sitting in main theater" <<std:: endl;
}

void Student::Show()
{

	std::cout << this->getFirstName() << " " << this->getLastName() << std::endl;
	

}

void Student::ShowGrade()
{
	this->Show();
	std::cout <<"Grade: " <<this->grade << std::endl;
}

