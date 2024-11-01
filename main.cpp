#include "GradeManager.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){

    try{
        int assignmentCount;

        cout << "Enter the number of assignments: ";
        cin >> assignmentCount;
        if (assignmentCount < 0){
            throw NumberAssignmentsException();
        }
        
        vector<double> maxScores(assignmentCount);

        cout << "Enter the maximum score for " << assignmentCount << " assignments: ";
        for (int i = 0; i < assignmentCount; i++){
            cin >> maxScores[i];
        }
        for (auto score : maxScores){
            if (score < 0){
                throw InvalidScoreException();
            }
        }

        GradeManager gradeManager(assignmentCount, maxScores);
        string firstName, lastName;
        vector<double> grades(assignmentCount);

        while (true){
            cout << "Enter students First and Last name (or 'q' to quit): ";
            cin >> firstName;
            if (firstName == "q"){
                break;
            }
            cin >> lastName;

            cout << "Enter " << assignmentCount << " grades for " << firstName << " " << lastName << ":\n";
            for (int i = 0; i < assignmentCount; i++){
                cin >> grades[i];
            }

            gradeManager.addStudent(firstName, lastName, grades);

        }


    
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }


    return 0;
}