#include "Student.h"



Student::Student(string fName, string lName) : firstName(fName), lastName(lName) {}


void Student::addGrade(double grade){
    scores.push_back(grade);
}

double Student::totalScore() const{
    double total = 0;
    for (double score : scores){
        total += score;
    }
    return total;
}

string Student::getFullName() const{
    return firstName + " " + lastName;
}