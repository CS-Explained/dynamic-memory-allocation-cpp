#include <iostream>

void PrintArray (const int arr [], const int SIZE) 
{
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    const int SIZE = 10;
    int arr [SIZE] = {0};
    
    
    PrintArray (arr, SIZE); 

    return 0;
}
