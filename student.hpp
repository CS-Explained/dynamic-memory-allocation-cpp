#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student 
{
private: 
    std::string name;
    int * grades;
    int numberOfGrades;
public:
    Student(std::string name, int numberOfGrades):
    name(name),
    numberOfGrades(numberOfGrades) 
    {
        this->grades = new int [numberOfGrades];
    }
    ~Student ()
    {
        delete [] this->grades;
    }
    // other functions.


};
#endif;