// Example of NULL versus C++11's nullptr
#include <iostream>
// Two functions which are overloaded
void fun(int)
{
    std::cout << " Call function fun(int)\n";
}
void fun(int*)
{
    std::cout << " Call function fun(int*)\n";
}

int main()
{
    fun(NULL);
    fun(nullptr);
    return 0 ;
}

