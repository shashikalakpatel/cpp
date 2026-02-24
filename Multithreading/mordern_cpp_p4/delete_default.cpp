#include <utility>
//Move-only class
class Test{
public:
    // =delte means the function exists but cannot be called
    //In older c++, we had to declare the member function private
    Test(const Test&) = delete;
    Test& operator =(const Test&) = delete;

    // =default means the compiler will synthesize
    // the default version of the operator
    Test(Test&&) noexcept = default;
    Test& operator =(Test&&) noexcept = default;    

    Test() = default;
};
int main()
{
    Test test1, test2, test3;
    // Test test4(test1);//error: use of deleted function 'Test::Test(const Test&)' from line 7
    // test2 = test1;//error: use of deleted function 'Test& Test::operator=(const Test&)' from line 8
    Test test4(std::move(test1));
    test3 = std::move(test2);

    return 0;
}