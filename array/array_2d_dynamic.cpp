#include <iostream>

int main()
{
    int rows = 2;
    int cols = 3;


    int **arr = new int*[rows]; 
    for(int i = 0; i < rows; i++) 
        arr[i] = new int[cols];


    // Fill and print 
    for(int i = 0; i < rows; i++) 
    { 
        for(int j = 0; j < cols; j++) 
        { 
            arr[i][j] = i + j; 
            std::cout << arr[i][j] << " "; 
        } 
        std::cout << std::endl; 
    } 
    // Free memory 
    for(int i = 0; i < rows; i++) 
        delete[] arr[i]; 
    delete[] arr;
    return 0;
}