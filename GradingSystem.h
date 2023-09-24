#ifndef GRDINGSYSTEM
#define GRADINGSYSTEM 

#include <string>
#include <vector>

class Student_Info {
private:
    int Batch;
    int No_Courses;
    int Roll_No;
    std::string Name;
    std::string Programme;
    std::vector<std::string> Course_Code;
    std::vector<std::string> Course_Name;
    std::vector<double> GPA;

public:
    void Information();
    void Courses();
    double Cgpa();
    void Grade();

     Student_Info() {};
     ~Student_Info() {};


};

#endif //GRADINGSYSTEM 