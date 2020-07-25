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

    std::vector<int> inCollection {3, 9, 15, 21, 27};
    std::vector<int> outCollection;

    // Perform accumulate
    auto result = std::accumulate(inCollection.begin(), inCollection.end(), 0,
                                  [](int total, int current)
                                  {
                                      return total + current;
                                  });


    // Display
    std::cout << "Accumulate:" << std::endl;
    std::cout << "result: " << result << std::endl; 

    return 0;
}