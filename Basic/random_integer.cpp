// #include <iostream>
// #include <random>
// // #include <vector>

// using  namespace std;
// int main()
// {
//     cout << "Generate 10 integer numbers\n";
//     for(int i = 0;i < 10 ; ++i)
//         // cout <<  std::mt19937 gen(rd()); << ", ";

//     cout << '\n';
//     cout << "Generate 5 floating point numbers\n";
//     for(int i = 0;i < 5 ; ++i)
//         cout << rand() << ", ";

//     cout << '\n';
//     return 0;
// }

#include <iostream>
#include <random>

int main() {
    // 1. Obtain a seed for the random number engine
    std::random_device rd;

    // 2. Seed the Mersenne Twister engine (a high-quality pseudo-random generator)
    std::mt19937 gen(rd());

    // 3. Define the distribution for a uniform integer range [1, 100]
    std::uniform_int_distribution<> distrib(1, 10);

    // 4. Generate and print the random number
    // int random_number = distrib(gen);
    std::cout << "Random number between 1 and 10: " ;
    for(int i = 0;i < 10 ; ++i)
        std::cout <<  distrib(gen)  << ", ";
    
    std::cout << '\n';
    return 0;
}