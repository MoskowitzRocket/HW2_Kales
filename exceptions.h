#include <stdexcept>

class NumberAssignmentsException : public std::logic_error {
    public:
        NumberAssignmentsException() : std::logic_error{"Number of assignments must be greater than 0"} {}
};

class InvalidScoreException : public std::logic_error {
    public:
        InvalidScoreException() : std::logic_error{"Maximum score must greater than 0"} {}
};

class TotalScoreException : public std::logic_error {
    public:
        TotalScoreException() : std::logic_error{"Total scores must be less than (#Assignments) * 100"} {}
};

class InvalidNameException : public std::logic_error {
    public:
        InvalidNameException() : std::logic_error{"Student Already Exists"} {}
};

class InvalidGradeException : public std::logic_error {
    public:
        InvalidGradeException() : std::logic_error{"Grade must be between 0 and Max Score"} {}
};



