//
// Created by Rokas Sabaitis on 2024-01-03.
//

#include "gtest/gtest.h"
#include "tests.h"

TEST(Student, add_grade) {
    Student student = Student("Jonas", "Jonaitis");
    student.add_grade(9);

    EXPECT_EQ(student.getGradeData().size(), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
