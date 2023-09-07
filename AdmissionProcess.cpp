#include "Personal_Info.h"
#include "Academic_Info.h"

int main() {
    PersonalInfo student_personal;
    student_personal.Personal_Introduction();
    student_personal.Eligible_Age();

    PastAcademicInfo student_academic;
    student_academic.Academic_Introduction();
    student_academic.Eligible_Academic();

    return 0;
}
