#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include <string>

class PersonalInfo {
private:
    int Age;
    std::string DOB;
    std::string Name;

    bool IsEligible_Personal();

public:
    void Personal_Introduction();
    void Eligible_Age();

    PersonalInfo() {};
    ~PersonalInfo() {}; 

};

#endif // PERSONALINFO_H
