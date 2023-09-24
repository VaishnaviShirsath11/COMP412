#ifndef PASTACADEMICINFO_H
#define PASTACADEMICINFO_H

#include <string>

class PastAcademicInfo {
private:
    int Extra_Curricular;
    int Percentage;
    std::string Course;
    std::string School_Name;

    bool IsEligible_Academic();

public:
    void Academic_Introduction();
    void Eligible_Academic();

    PastAcademicInfo() {};
    ~PastAcademicInfo() {};
    
    
 };

#endif // PASTACADEMICINFO_H
