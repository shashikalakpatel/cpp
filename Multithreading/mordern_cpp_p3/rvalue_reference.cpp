#include <iostream>

//The caller's object will be moved into x
void func(int&& arg)
{
    std::cout << "Rvalue reference" << std::endl;
}

int main()
{
    func(2);
    int y = 3;
    func(y);//Error!! Must be a moveable rvalue
    
    return 0;
}