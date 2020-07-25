#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>


void demoFunction()
{
    std::cout << "Called demoFunction" << std::endl;
}


void adder(int a, int b)
{
    std::cout << "Called adder, a + b = " << a + b << std::endl;
}


class functor
{
    public:
        void operator() () const
        {
            std::cout << "Called functor" << std::endl;
        }
};


int main(int argc, char ** argv)
{
    std::vector<std::function<void()>> funcs;

    funcs.emplace_back(demoFunction);

    funcs.emplace_back(functor ());

    funcs.emplace_back([](){std::cout << "Called anonymous lambda" << std::endl;});

    funcs.emplace_back(std::bind(& adder, 10, 15));

    // Run each element
    for(auto & f : funcs)
    {
        f();
    }

    return 0;
}