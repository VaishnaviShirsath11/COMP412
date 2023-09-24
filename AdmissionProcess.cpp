#include "Personal_Info.h"
#include "Academic_Info.h"

int main() {
    PersonalInfo *student_personal = new PersonalInfo;
    student_personal->Personal_Introduction();
    student_personal->Eligible_Age();

    PastAcademicInfo *student_academic = new PastAcademicInfo;
    student_academic->Academic_Introduction();
    student_academic->Eligible_Academic();

     delete student_personal;
     delete student_academic;

    return 0;
}
