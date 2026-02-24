#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec{4,2,3,1,5};
    int n = 2;

    std::cout << "Elements of Vector:  ";
        
    for(auto i: vec) 
        std::cout << i<< ", ";
    std::cout << '\n';
    
    int radix = 3;
    //Call std::cout_if algorithm using a labda expression as predicate
    auto n_even = std::count_if(vec.begin(), vec.end(),
            //the lambda captures radix by value
            [radix](int n){
                return (n % radix == 0);
            }
    );


    std::cout << "The vector has " << n_even << " element(s) with even values\n";
    return 0;
}