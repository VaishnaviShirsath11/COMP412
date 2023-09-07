#include "Academic_Info.h"
#include <iostream>

bool PastAcademicInfo::IsEligible_Academic() {
    return Percentage >= 75 && Extra_Curricular >= 5;
}

void PastAcademicInfo::Academic_Introduction() {
    std::cout << "Last school attended - ";
    std::cin >> School_Name;

    std::cout << "Last course passed - ";
    std::cin >> Course;

    std::cout << "Percentage in that course - ";
    std::cin >> Percentage;

    std::cout << "Number of extra-curricular activities - ";
    std::cin >> Extra_Curricular;
}

void PastAcademicInfo::Eligible_Academic() {
    if (IsEligible_Academic()) {
        std::cout << "You are eligible to apply for an undergraduate course at Krea University! Please email us for further process." << std::endl;
    } else {
        std::cout << "You are not eligible to apply for the undergraduate course at Krea University as you do not meet the required academic criteria." << std::endl;
    }
}
