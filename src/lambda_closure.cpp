#include <iostream>
#include <functional>
#include <vector>


auto incrementer = []()
                   {
                       auto increment = 0;
                       return [increment]() mutable -> auto
                              {
                                  return increment++;
                              };
                   };


int main(int argc, char ** argv)
{
    auto myInc = incrementer();

    std::cout << "myInc = " << myInc() << std::endl;
    std::cout << "myInc = " << myInc() << std::endl;
    std::cout << "myInc = " << myInc() << std::endl;
    std::cout << "myInc = " << myInc() << std::endl;

    return 0;
}