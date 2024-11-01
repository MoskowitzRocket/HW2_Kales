#include "Student.h"
#include "exceptions.h"
#include <map>
#include <vector>

using namespace std;

class GradeManager {
private:
    int numAssignments;
    vector<double> maxScores;
    map<string, Student> students;
public:
    GradeManager(int assignmentCount, vector<double> maxScores);
    void addStudent(const string& firstName, const string& lastName, const vector<double>& grades);
    void printGrades() const;

};