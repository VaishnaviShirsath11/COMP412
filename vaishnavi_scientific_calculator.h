#ifndef scientific_calculator_h
#define scientific_calculator_h


class Calculate{

double num1; 
double num2;

public:
    void one_input();
	void two_input();
    double addition();
	double subtraction();
	double multiplication();
    double division();
    double percentage();
    double power();
    double square_root();
    double square();
    double natural_log();
    double log_10();
};

#endif

