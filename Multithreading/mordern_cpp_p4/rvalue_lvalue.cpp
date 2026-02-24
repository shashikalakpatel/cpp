#include <iostream>
//Define a moveable type
//(the compiler will provide move operators)
class Test{};

/****Function overloading****/
//Function which takes lvalue reference
void fun(const Test& test)
{
    std::cout << "Lvalue reference\n";
}

//Function which takes rvalue reference
void fun(const Test&& test)
{
    std::cout << "Rvalue reference\n";
}

int main()
{
    Test test;

    std::cout << "Argument is test variable:\t\t";
    fun(test);

    std::cout << "Argument is temprary object:\t\t ";
    fun(Test());

    std::cout << "Argument through std::move():\t\t";
    fun(std::move(test));
    return 0 ;
}