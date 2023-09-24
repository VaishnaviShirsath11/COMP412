#include "GradingSystem.h"
#include <iostream>

int main() {

    Student_Info *student1 = new Student_Info;
    student1->Information();
    student1->Courses();
    double cgpa = student1->Cgpa();
    std::cout << "CGPA: " << cgpa << std::endl;
    student1->Grade();
     
    delete student1;
    return 0;
}
