#include "Course.h"
#include<iostream>
Course::Course()
{
	this->count = 0;
	students = new Student[3];
}

Course::Course( Teacher teacher, std::string name)
{
	this->count = 0;
	this->name = name;
	this->teacher = teacher;
	students = new Student[3];
	
}

Course::~Course()
{
	delete[] students;
}

Teacher Course::getTeacher()
{
	return Teacher();
}

void Course::setTeacher(Teacher t)
{
	this->teacher = t;
}
std::string Course::getName()
{
	return this->name;
}
void Course::setName(std::string name)
{
	this->name = name;
}

void Course::addStudent(Student student)
{
	if (this->count < 3) {
		students[this->count++] = student;
	}
	else {
		std::cout << "Full course!" << std::endl;
	}
	
}

void Course::ShowCourse()
{
	std::cout << this->getName();
	std::cout << "Teacher: " << this->teacher.getFirstName() << " " << this->teacher.getLastName() << std::endl;
	for (size_t i = 0; i < 3; i++)
	{
		students[i].Show();

	}
}


