#include<iostream>
#include "Course.h"
#include "Student.h"
#include "Teacher.h"

int main() {
	Student* student1 = new Student();
	Student* student2 = new Student();
	Student* student3 = new Student();

	student1->setFirstName( "Andrei");
	student1->setAddress("Borina 23");
	student1->setAge(14);
	student1->setLastName("Bruno");
	student1->setPhone("686 59 76");
	student1->setCity("Sofia");

	student2->setFirstName("An");
	student2->setAddress("Dondujov 23");
	student2->setAge(16);
	student2->setLastName("Hey");
	student2->setPhone("2353356");
	student2->setCity("Sofia");

	student3->setFirstName("Milcho");
	student3->setAddress("Vitosha 23");
	student3->setAge(15);
	student3->setLastName("Kolev");
	student3->setPhone("3464 89-78");
	student3->setCity("Sofia");

	Teacher* teacher = new Teacher();
	teacher->setFirstName("Strog");
	teacher->setAddress("Levski 23");
	teacher->setAge(35);
	teacher->setLastName("Nospravedliv");
	teacher->setPhone("no info");
	teacher->setCity("Sofia");

	Course * someCourse = new Course();
	someCourse->setName("Intermediate C++");
	someCourse->addStudent(*student1);
	someCourse->addStudent(*student2);
	someCourse->addStudent(*student3);
	someCourse->setTeacher(*teacher);
	someCourse->ShowCourse();
	teacher->GradeStudent(student1, 2.6);
	student1->ShowGrade();
	teacher->SitInClass();

	getchar();
}