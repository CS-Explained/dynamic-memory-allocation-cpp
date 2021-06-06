#include <iostream>

int main ()
{
    // int * ptr = new int;
    // *ptr = 5;
    // std::cout << *ptr << std::endl;
    // delete ptr;

    int numberOfStudents = 0;
    std::cout << "How many students that you have? ";
    std::cin >> numberOfStudents;
    int * arr = new int [numberOfStudents];
    for (int i = 0; i < numberOfStudents; ++i)
    {
        arr[i] = 0;
    }
    delete [] arr;
    return 0;
}