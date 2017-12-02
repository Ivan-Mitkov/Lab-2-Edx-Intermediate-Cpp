#pragma once
#include<vector>
#include "Student.h"
#include "Teacher.h"
#include <string>
class Course {
private:
	Student *students;
	Teacher teacher;
	std::string name;
	int count;
public:
	Course();
	Course( Teacher teacher, std::string name);
	~Course();
	Teacher getTeacher();
	void setTeacher(Teacher t);
	std::string getName();
	void setName(std::string name);
	void addStudent(Student student);
	void ShowCourse();
};
