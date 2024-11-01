#include <vector>
#include <string>

using namespace std;
class Student{
private:
    string firstName;
    string lastName;
    vector<double> scores;    
public:
    Student(string fName, string lName);
    void addGrade(double grade);
    double totalScore() const;
    string getFullName() const;



};
