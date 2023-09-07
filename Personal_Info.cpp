#include "Personal_Info.h"
#include <iostream>

bool PersonalInfo::IsEligible_Personal() {
    return Age >= 17;
}

void PersonalInfo::Personal_Introduction() {
    std::cout << "Name of applicant - ";
    std::cin >> Name;

    std::cout << "Age of applicant - ";
    std::cin >> Age;

    std::cout << "DOB of applicant - ";
    std::cin >> DOB;
}

void PersonalInfo::Eligible_Age() {
    if (IsEligible_Personal()) {
        std::cout << "You are eligible to apply for an undergraduate course at Krea University! Please fill in the next section." << std::endl;
    } else {
        std::cout << "You are not eligible to apply for the undergraduate course at Krea University as you are still below the age of 17." << std::endl;
    }
}
