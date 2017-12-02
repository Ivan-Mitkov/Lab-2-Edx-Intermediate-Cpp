#pragma once
#include<string>
class Student {
private:
	std::string firstName;
	std::string lastName;
	std::string city;
	std::string address;
	std::string phone;
	int age;
	double grade;
public:
	Student();
	Student(std::string firstName, std::string lastName,
		std::string city, std::string address, std::string phone, int age);
	~Student();
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
	bool setGrade(double grade);
	void SitInClass();
	void Show();
	void ShowGrade();

};
