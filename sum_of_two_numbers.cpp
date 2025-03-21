#include <iostream>

int main()
{
    int a, b, sum =0;
    std::cout<<"Enter two numbers to be added\n";
    // Here the >> operator formats the data based on its type. We dont 
    // need to give format specifier(%d) while reading or printing. 
    // In C++ it is done through operator not through variadic function.
    std::cin>>a>>b;
    sum = a+b;
    // Here the << operator formats the data based on its type.
    std::cout<<"Sum of " << a << " and " << b << " is " << sum << std::endl;

    return 0;
}
