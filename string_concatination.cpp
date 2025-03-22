#include<iostream>
#include<string>

int main()
{
    // part of string header file. It is a type
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string c_str;
    // we can concatinate just using the '+'  operator.
    // we can use the string functions from string.h library
    // by adding #include <cstring> and string functions available
    // in std namespace. This is an easy way in C++ to do concatination.
    std::cout<< "Concatination of " << str1 << " and " << str2 << " is " << str1+str2 << "\n";
    // instead of strcpy() we simply use assignment operator to copy the string.
    c_str = str1;
    std::cout << "The value of c_str is "<<c_str << std::endl; 
    return 0;
}
