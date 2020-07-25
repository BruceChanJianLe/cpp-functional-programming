#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>


int main(int argc, char ** argv)
{
    auto render = [](auto collection)
                  {
                      for(const auto & value : collection)
                      {
                          std::cout << value << std::endl;
                      }
                  };

    std::vector<int> inCollection {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> outCollection;

    // Perform mapping
    std::transform(inCollection.begin(), inCollection.end(), std::back_inserter(outCollection),
                   [](const int & value)
                   {
                       return value * 3;
                   });

    // Display
    std::cout << "Transform/Mapping:" << std::endl;
    render(outCollection);

    return 0;
}