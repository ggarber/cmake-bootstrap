/**
\file
A sample source code file that supplies a sample class and test driver program
for that class.
*/
#include <iostream>

#include "Foo.h"

/**
Says hello world to console.
*/
void Foo::run( ) const
{
    std::cout << "Hello world!\n";
}

int Foo::sum( int a, int b ) const
{
    return a + b;
}
