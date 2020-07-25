# CPP Functional Prgramming

This repo are some notes and examples of functional programming.

## Benefits of Functional Programming

- Pure functions are easier to understand
- Uncomplicated debugging and testing
- Achievable multithreading

## Functional Programming Style

- Immutable variables
- Recursion over loops
- Functions are pure and simple
- Expressions preferred over statements
- Currying manages how arguments are passed to functions

## OOP and FP

- Object-oriented programming (OOP) and functional programming (FP) are not enemies
- We can use the best of both for better programs

**Object-Oriented**

- Polymorphism
- Classes

**Functional**

- Immutability
- Pure functions

## Map, Filter and Reduce

- Map, filter and reduce do not exist in C++
- std::transform _replaces_ map
- std::copy_if _replaces_ filter
- std::accumulate _replaces_ reduce


## C++ Template Metaprogramming

- Template metaprogramming (TMP) is a Turning complete, functional programming language built-in to C++
- TMP variables are always immutable
- TMP does not have loops so we always use recursion

## The Standard Template Library

- The part of the C++ standard library made with template
- Consists of four components: algorithms, containers, functions, iterators

## Functional Programming Libraries

- Loki
- Boost.MPL
- Boost.Fusion
- Boost.Hana
- Boost.HOF (HigherOrderFunctions)

## Boost.Hana

- Superset of the Boost.MPL and Boost.Fusion libraries
- Provides library support for tuples, also known as heterogeneous collections
- It also has a large number of functional methods

## Introduction to Reactive Extensions

- Combines the best parts: of the Observer and Iterator patterns and functional programming
- ReactiveX is available for all major programming languages
- Used by many top tech companies

**Four Keys to ReactiveX**  
- Observables
- Observers
- Operatos
- Schedulers

**Header**  
`RxCpp Library`  
- Header-only, C++ implementation of ReactiveX
- Can convert from STL containers to observables
- Supports either a chaining or a pipe interface

link = `https://github.com/ReactiveX/RxCpp`