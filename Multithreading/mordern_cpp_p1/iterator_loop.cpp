#include <iostream>
#include <vector>

int main()
{

    std::vector<int> vec{4,2,3,1,5};
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end() ; ++it)
        *it +=2;
      
    std::cout << "Vector elements: ";    
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end() ; ++it)
        std::cout << *it << ",";

    return 0;
}
