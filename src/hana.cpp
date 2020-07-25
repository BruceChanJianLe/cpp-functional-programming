#include <iostream>
#include <string>
#include <boost/hana.hpp>


struct Truck
{
    std::string name;
    double bed_length;
};

struct Car
{
    std::string name;
};

struct Motorcycle
{
    std::string name;
};


int main(int argc, char ** argv)
{
    auto vehicles =  boost::hana::make_tuple(Truck {"F-150", 8.5},
                                             Car {"Volt"},
                                             Motorcycle {"Ninja"});

    auto has_bed_length = boost::hana::is_valid([](auto && x) -> decltype((void) x.bed_length)
                                                {
                                                    ;
                                                });

    // Filter out trucks
    auto trucks = boost::hana::filter(vehicles, has_bed_length);
    // Filter out non trucks
    auto non_trucks = boost::hana::filter(vehicles, boost::hana::compose(boost::hana::not_, has_bed_length));

    // Display
    boost::hana::for_each(trucks, [](auto & vehicle)
                                  {
                                      std::cout << "Truck = " << vehicle.name << ", bed length = " << vehicle.bed_length << std::endl;
                                  });

    // Display
    boost::hana::for_each(non_trucks, [](auto & vehicle)
                                      {
                                          std::cout << "Vehicle = " << vehicle.name << std::endl;
                                      });

    return 0;
}