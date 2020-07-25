cmake_minimum_required(VERSION 2.8)
project(cpp-functional-programming)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(map src/map.cpp)
add_executable(copy_if src/copy_if.cpp)
add_executable(accumulate src/accumulate.cpp)
add_executable(bind src/bind.cpp)

add_executable(functions src/functions.cpp)

add_executable(lambda_curry src/lambda_curry.cpp)
add_executable(lambda_closure src/lambda_closure.cpp)

add_executable(template src/template.cpp)
add_executable(factorial src/factorial.cpp)

add_executable(hana src/hana.cpp)

add_executable(fibonacci src/fibonacci.cpp)

add_executable(rxcpp src/rxcpp.cpp)

add_compile_options(-Wall -Wextra -pedantic)