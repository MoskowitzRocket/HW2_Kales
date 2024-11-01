#include "GradeManager.h"
#include <iostream>
using namespace std;

GradeManager::GradeManager(int assignmentCount, vector<double> maxScores) : numAssignments(assignmentCount), 
maxScores(maxScores) {}

void GradeManager::addStudent(const string& firstName, const string& lastName, const vector<double>& grades){
    string fullName = firstName + " " + lastName;
    if (students.count(fullName) > 0){
        throw InvalidNameException();
    }

    double total = 0;
    for (int i{0}; i < numAssignments; i++){
        if (grades[i] < 0 || grades[i] > maxScores[i]){
            throw InvalidGradeException();
        }
        total += grades[i];
    }



    double maxScore{0};
    for (auto score : maxScores){
        maxScore += score;
    }
    if (total > maxScore){
        throw TotalScoreException();
    }

    Student student(firstName, lastName);
    for (int i{0}; i < numAssignments; i++){
        student.addGrade(grades[i]);
    }
    students.insert({fullName, student});
}