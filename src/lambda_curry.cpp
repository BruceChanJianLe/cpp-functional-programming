#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>


auto addCurry = [](auto a)
                {
                    return [a](auto b)
                            {
                                return [a, b](auto c)
                                        {
                                            return a + b + c;
                                        };
                            };
                };


int main(int argc, char ** argv)
{
    // First method of calling
    auto added1 = addCurry(1);
    auto added2 = added1(10);
    auto addResults = added2(100);

    // Display
    std::cout << "result: " << addResults << std::endl;

    // Second method of calling
    auto allAtOnce =  addCurry(990000)(9900)(99);

    std::cout << "All results: " << allAtOnce << std::endl;

    return 0;
}