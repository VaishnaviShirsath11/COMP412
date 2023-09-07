CC = g++
CFLAGS = 

AdmissionProcess.exe : AdmissionProcess.o Personal_Info.o Academic_Info.o 
	$(CC) $(CFLAGS) -o AdmissionProcess.exe AdmissionProcess.o Personal_Info.o Academic_Info.o 

AdmissionProcess.o : AdmissionProcess.cpp Personal_Info.cpp Academic_Info.cpp
	$(CC) $(CFLAGS) -c AdmissionProcess.cpp

Personal_Info.o : Personal_Info.cpp Personal_Info.h
	$(CC) $(CFLAGS) -c Personal_Info.cpp

Academic_Info.o : Academic_Info.cpp Academic_Info.h 
	$(CC) $(CFLAGS) -c Academic_Info.cpp 