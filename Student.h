// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "libraries.h"
#include <string>
#include <vector>

class Student {
public:
    // Constructor
    Student(std::string firstName, std::string lastName);
    Student(const Student &other);  // Copy Constructor

    // Destructor
    ~Student();

    // Copy Assignment Operator
    Student &operator=(const Student &other);

    // Destructor
    ~Student();

    const std::string &getFirstName() const;
    const std::string &getLastName() const;
    const std::vector<int> &getGradeData() const;

    // Function to add integers to the series
    void add_grade(int num);

    void setGradeData(const std::vector<int>& grades);

    // Function to calculate the average of the series
    double calculateAverageGrade() const;

    // Function to calculate the median of the series
    double calculateMedianGrade();

    // Function to randomly generate a random series of grades
    void generateRandomGrades(int num_of_grades = 0);

private:
    std::string first_name;
    std::string last_name;
    std::vector<int> grade_data;
};

// Comparator structure for Student structure
struct studentComp {
    bool operator()(const Student &a, const Student &b);
};

#endif // STUDENT_H
