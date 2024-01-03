cmake_minimum_required(VERSION 3.26)
project(OP_v2)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)

# Add your source files
set(SOURCE_FILES
        main.cpp
        libraries.h
        Student.cpp
        Student.h
        TextReader.cpp
        TextReader.h
        UserInterface.cpp
        UserInterface.h
        FileGenerator.cpp
        FileGenerator.h
        Person.cpp
        Person.h
        tests.h
        tests.cpp
)

# Create the main executable
add_executable(OP ${SOURCE_FILES})

# Add optimization flags
target_compile_options(OP PRIVATE -O3)

# Create a test executable
set(TEST_SOURCES
        tests.cpp
)

# Create a test executable
add_executable(tests tests.cpp Student.cpp Person.cpp)

# Link Google Test libraries
target_link_libraries(tests GTest::GTest GTest::Main)




