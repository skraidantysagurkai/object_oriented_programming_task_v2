#ifndef OP_V2_PERSON_H
#define OP_V2_PERSON_H

#include <string>

class Person {
public:
    Person(const std::string& firstName, const std::string& lastName);

    Person(const Person &other);  // Copy Constructor

    // Destructor
    virtual ~Person();

    // Copy Assignment Operator
    Person &operator=(const Person &other);

    virtual const std::string &getFirstName() const;

    virtual const std::string &getLastName() const;

    // Pure virtual function to make Person an abstract class
    virtual void displayInfo() const = 0;

protected:
    std::string first_name;
    std::string last_name;
};

struct PersonComp {
    inline bool operator()(const Person &a, const Person &b);
};

#endif // OP_V2_PERSON_H
