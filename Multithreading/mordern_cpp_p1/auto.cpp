#include <iostream>
#include <vector>

int main()
{
    // auto x = 6;// Equivalent to int x = 6;
    // auto x{6};Equivalent to int x{6};
    // const std::string& str = "Hello"; //reference to const
    // auto hello = str; // hello has type std::string //It is mutable copy of str
    // const auto& str1 = hello; // hello is a const reference to std::string

    std::vector<int> vec{4,2,3,1,5};
    for(auto it = vec.begin(); it != vec.end() ; ++it)
        *it +=2;
      
    std::cout << "Vector elements: ";    
    for(auto it = vec.begin(); it != vec.end() ; ++it)
        std::cout << *it << ",";

    return 0;
}
