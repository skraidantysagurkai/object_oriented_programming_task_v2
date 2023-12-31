//
// Created by Rokas Sabaitis on 2023-12-29.
//

#ifndef OP_V2_PERSON_H
#define OP_V2_PERSON_H

#include <string>

class Person {
public:
    Person(const std::string& firstName, const std::string& lastName);

    Person(const Person &other);  // Copy Constructor

    // Destructor
    ~Person();

    // Copy Assignment Operator
    Person &operator=(const Person &other);

    // Pure virtual function (making Person an abstract class)
    virtual void displayInfo() const = 0;

    const std::string &getFirstName() const;

    const std::string &getLastName() const;

protected:
    std::string first_name;
    std::string last_name;

};

struct PersonComp {
    inline bool operator()(const Person &a, const Person &b);
};



#endif // OP_V2_PERSON_H
