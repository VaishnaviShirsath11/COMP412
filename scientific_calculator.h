#ifndef scientific_calculator_h
#define scientific_calculator_h


class Calculate{
    
float num1; 
float num2;

public:
    void one_input();
	void two_input();
    float addition();
	float subtraction();
	float multiplication();
    float division();
    float percentage();
    float power();
    float square_root();
    float square();
    float natural_log();
    float log_10();
};

#endif

