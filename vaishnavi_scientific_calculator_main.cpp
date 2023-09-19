#include "vaishnavi_scientific_calculator.h"
#include <iostream>

int main(){
    int choice;
	Calculate num;
	std::cout << "Please enter 1 to add 2 numbers (a+b)" <<
			     "\nPlease enter 2 to subtract 2 numbers (a-b)" <<
			     "\nPlease enter 3 to multiply 2 numbers (a*b)" <<
			     "\nPlease enter 4 to divide 2 numbers (a/b)" <<
                 "\nPlease enter 5 to calculate 'a' raised to the power of 'b' (a^b)" <<
                 "\nPlease enter 6 to calculate 'a' percent of 'b' (a% b)" <<
                 "\nPlease enter 7 to calculate square root of a number (√a)" <<
                 "\nPlease enter 8 to calculate sqaure of a number (a^2)" <<
                 "\nPlease enter 9 to calculate ln of a number (ln(a))"<<
                 "\nPlease enter 10 to calculate log of a numebr (log (a))" <<
			     "\nPlease enter 0 to Exit";
		
	do
	{
		std::cout << "\nPlease Enter Your Choice: ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			num.two_input();	
			std::cout << "The result is: " <<
					num.addition() << std::endl;
			break;

		case 2:
			num.two_input();
			std::cout << "The result is: " <<
					num.subtraction() << std::endl;
			break;

		case 3:
			num.two_input();
			std::cout << "The result is: " <<
					num.multiplication() << std::endl;
			break;

		case 4:
			num.two_input();
			std::cout <<
					num.division() << std::endl;
			break;

        case 5:
			num.two_input();
			std::cout << "The result is: " <<
					num.power() << std::endl;
			break;

        case 6:
            num.two_input();
            std::cout << "The result is: " <<
                num.percentage() << std::endl;
            break;

        case 7:
            num.one_input();
            std::cout << "The result is: " <<
                num.square_root() << std::endl;
            break;

        case 8:
            num.one_input();
            std::cout << "The result is: "<<
                num.square() << std::endl;
            break;

        case 9:
            num.one_input();
            std::cout << "The result is: "<<
                num.natural_log() << std::endl;
            break;
        
        case 10:
            num.one_input();
            std::cout << "The result is: " <<
                num.log_10() << std::endl;
            break;
		}
		
	} 
    while (choice >= 1 && choice <= 10);
	
	return 0;
}