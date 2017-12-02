#include "Teacher.h"
#include <iostream>
Teacher::Teacher()
{
}

Teacher::Teacher(std::string firstName, std::string lastName, std::string city, std::string address, std::string phone, int age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->city = city;
	this->address = address;
	this->phone = phone;
	this->age = age;
}

Teacher::~Teacher()
{
}

std::string Teacher::getFirstName()
{
	return this->firstName;
}

std::string Teacher::getLastName()
{
	return this->lastName;
}

std::string Teacher::getCity()
{
	return this->city;
}

std::string Teacher::getAddress()
{
	return this->address;
}

std::string Teacher::getPhone()
{
	return this->phone;
}

int Teacher::getAge()
{
	return this->age;
}

void Teacher::setFirstName(std::string fn)
{
	this->firstName = fn;
}

void Teacher::setLastName(std::string ln)
{
	this->lastName = ln;
}

void Teacher::setCity(std::string c)
{
	this->city = c;
}

void Teacher::setAddress(std::string a)
{
	this->address = a;
}

void Teacher::setPhone(std::string ph)
{
	this->phone = ph;
}
void Teacher::setAge(int age)
{
	this->age = age;
}

bool Teacher::GradeStudent(Student* s, double grade)
{
	s->setGrade(grade);
	return true;
	

}

void Teacher::SitInClass()
{
	std::cout << "Sitting at front of class" <<std:: endl;
}

