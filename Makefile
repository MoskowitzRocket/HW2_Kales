GCC = g++
CFLAGS = -Wall -g -std=c++20

TARGET = build

OBJECTS = Student.o main.o GradeManager.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(GCC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

Student.o: Student.cpp Student.h
	$(GCC) $(CFLAGS) -c Student.cpp

GradeManager.o: GradeManager.cpp GradeManager.h
	$(GCC) $(CFLAGS) -c GradeManager.cpp

main.o: main.cpp GradeManager.h
	$(GCC) $(CFLAGS) -c main.cpp