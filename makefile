CC = g++
CFLAGS =

# Define the default target to build all executables
all: AdmissionProcess.exe Grading.exe Calculator.exe

# Target to build AdmissionProcess.exe
AdmissionProcess.exe : AdmissionProcess.o Personal_Info.o Academic_Info.o
	$(CC) $(CFLAGS) -o AdmissionProcess.exe AdmissionProcess.o Personal_Info.o Academic_Info.o

AdmissionProcess.o : AdmissionProcess.cpp Personal_Info.h Academic_Info.h
	$(CC) $(CFLAGS) -c AdmissionProcess.cpp

Personal_Info.o : Personal_Info.cpp Personal_Info.h
	$(CC) $(CFLAGS) -c Personal_Info.cpp

Academic_Info.o : Academic_Info.cpp Academic_Info.h
	$(CC) $(CFLAGS) -c Academic_Info.cpp

# Target to build Grading.exe
Grading.exe : Grading.o Grading_main.o
	$(CC) $(CFLAGS) -o Grading.exe Grading_main.o Grading.o

Grading_main.o : Grading_Main.cpp GradingSystem.h
	$(CC) $(CFLAGS) -c Grading_Main.cpp

Grading.o : Grading.cpp GradingSystem.h
	$(CC) $(CFLAGS) -c Grading.cpp

# Target to build Calculator.exe
Calculator.exe : Calculator.o Calculator_main.o
	$(CC) $(CFLAGS) -o Calculator.exe Calculator_main.o Calculator.o

Calculator_main.o : vaishnavi_scientific_calculator_main.cpp vaishnavi_scientific_calculator.h
	$(CC) $(CFLAGS) -c vaishnavi_scientific_calculator_main.cpp

Calculator.o : vaishnavi_scientific_calculator.cpp vaishnavi_scientific_calculator.h
	$(CC) $(CFLAGS) -c vaishnavi_scientific_calculator.cpp

# Target to clean up generated files
clean:
	rm -f Academic_Info.o Personal_Info.o AdmissionProcess.o AdmissionProcess.exe Grading.o Grading_main.o Grading.exe Calculator.o Calculator_main.o Calculator.exe
