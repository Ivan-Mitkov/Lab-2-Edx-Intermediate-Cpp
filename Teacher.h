#pragma once
#include<string>
#include"Student.h"

class Teacher {
private:
	std::string firstName;
	std::string lastName;
	std::string city;
	std::string address;
	std::string phone;	
	int age;

public:
	Teacher();
	
	Teacher(std::string firstName, std::string lastName,
		std::string city, std::string address, std::string phone, int age);
	~Teacher();
	std::string getFirstName();
	std::string getLastName();
	std::string getCity();
	std::string getAddress();
	std::string getPhone();
	int getAge();
	void setFirstName(std::string);
	void setLastName(std::string);
	void setCity(std::string);
	void setAddress(std::string);
	void setPhone(std::string);
	void setAge(int a);
	bool GradeStudent(Student* s, double grade);
	void SitInClass();
};
