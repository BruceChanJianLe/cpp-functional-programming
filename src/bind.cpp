#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>


auto greater_than(int first, int second)
{
    return first >= second;
}


int main(int agrc, char ** argv)
{
    std::vector<int> ages {9, 20, 13, 4, 5, 6, 10, 28, 19, 15, 60, 23, 47, 12, 19, 99};

    // Typical Programming Thinking
    int over21 = 0;
    for(int age : ages)
    {
        if(age >= 21)
            over21++;
    }

    // Display
    std::cout << "Typical thinking number over 21 = " << over21 << std::endl;


    // Functional Programming Thinking
    auto num_over21 = std::count_if(ages.begin(), ages.end(),
        std::bind(& greater_than, std::placeholders::_1, 21)
    );

    // Display
    std::cout << "Functional thinking number over 21 = " << num_over21 << std::endl;

    return 0;
}