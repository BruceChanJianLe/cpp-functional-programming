#include <iostream>


template<int n>
struct fibonacci
{
    enum {value = fibonacci<n - 1>::value + fibonacci<n - 2>::value};
};

template<>
struct fibonacci<0>
{
    enum {value = 0};
};

template<>
struct fibonacci<1>
{
    enum {value = 1};
};


int main(int argc, char ** argv)
{
    std::cout << "fibonacci<0> = " << fibonacci<0>::value << std::endl;
    std::cout << "fibonacci<1> = " << fibonacci<1>::value << std::endl;
    std::cout << "fibonacci<2> = " << fibonacci<2>::value << std::endl;
    std::cout << "fibonacci<3> = " << fibonacci<3>::value << std::endl;
    std::cout << "fibonacci<4> = " << fibonacci<4>::value << std::endl;
    std::cout << "fibonacci<5> = " << fibonacci<5>::value << std::endl;
    std::cout << "fibonacci<11> = " << fibonacci<11>::value << std::endl;
    std::cout << "fibonacci<12> = " << fibonacci<12>::value << std::endl;
    std::cout << "fibonacci<45> = " << fibonacci<45>::value << std::endl;

    return 0;
}