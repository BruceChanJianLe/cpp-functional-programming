#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


int main(int agrc, char ** argv)
{
    auto render = [](auto collection)
                  {
                      for(const auto & value : collection)
                      {
                          std::cout << value << std::endl;
                      }
                  };

    std::vector<int> inCollection {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
    std::vector<int> outCollection;

    // Perform copy_if
    std::copy_if(inCollection.begin(), inCollection.end(), std::back_inserter(outCollection),
                 [](int & value)
                 {
                     return value % 2 != 0;
                 });

    // Display
    std::cout << "Copy_if:" << std::endl;
    render(outCollection);

    return 0;
}