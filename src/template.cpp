#include <iostream>
#include <vector>

// Generic Programming
template<typename T>
T cube(const T & value)
{
    return value * value * value;
}


// TMP
template<int toCube>
struct Cube
{
    enum { value = toCube * toCube * toCube};
};


int main(int argc, char ** argv)
{
    // Done in run time
    std::cout << "(Generic) 8 cubed = " << cube(8) << std::endl;
    // Done in compile time
    std::cout << "(TMP) 5 cube = " << Cube<5>::value << std::endl;

    return 0;
}
