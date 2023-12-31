//
// Created by Rokas Sabaitis on 2023-10-01.
//

#ifndef OP_STUDENT_H
#define OP_STUDENT_H

#include "libraries.h"

struct Student {
    std::string first_name;
    std::string last_name;
    std::vector<int> grade_data;

    Student(std::string firstName, std::string lastName);
    Student(const Student &other);  // Copy Constructor

    // Destructor
    ~Student();

    // Copy Assignment Operator
    Student &operator=(const Student &other);

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
};

// Comparator structure for Student structure
struct studentComp {
    inline bool operator()(const Student &a, const Student &b);
};

#endif //OP_STUDENT_H