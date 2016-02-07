/**
\file
Declares the sample Foo class.
*/

#ifndef FOO_H
#define FOO_H
/**
A sample class.
*/
class Foo
{
public:

    /**
    Says hello world.
    */
    void run( ) const;

    /**
    Adds two numbers.
    */
    int sum( int a, int b ) const;
}; // class Foo
#endif // FOO_H
