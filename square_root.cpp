#include <iostream>
// including C standard header into C++. If you the "cmath" all the functions
// in math.h will present in std namespace. If we use "math.h" all the functions
// will be in the global not in std namespace.
#include <cmath>

int main()
{
    int a;
    std::cout<<"Enter the number to find square root\n";
    std::cin>>a;
    // Here the << operator formats the data based on its type.
    std::cout<<"Square root of " << a << " is " << std::sqrt(a) << std::endl;

    return 0;
}
