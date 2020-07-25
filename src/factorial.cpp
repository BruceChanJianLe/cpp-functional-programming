#include <iostream>
#include <vector>


// Typical Programming
int factorial(const int input, const int sum = 1)
{
    if(input > 1)
        return factorial(input - 1, sum * input);
    else
        return sum;
}

// TMP
template<int input, int sum = 1>
struct Factorial : Factorial<input - 1, sum * input>
{
    ;
};

template<int sum>
struct Factorial<1, sum>
{
    enum {value = sum};
};


int main(int argc, char ** argv)
{
    std::cout << "(Typical) 5! = " << factorial(5) << std::endl;
    std::cout << "(TMP) Fatorial<4> " << Factorial<4>::value << std::endl;
    std::cout << "(TMP) Fatorial<5> " << Factorial<5>::value << std::endl;

    return 0;
}