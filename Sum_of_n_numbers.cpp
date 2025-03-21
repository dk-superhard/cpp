#include <iostream>

int main()
{
    int a, sum;
    std::cout<<"Enter the number till which we need to find sum\n";
    std::cin>>a;
    // In C program before C99 we can't declare variable in the for
    // loop. we need to declare before using it.
    for (int i=0; i<=a; i++) {
        sum += i;
    }
    // Here the << operator formats the data based on its type.
    std::cout<<"Sum of numbers till " << a << " is " << sum << std::endl;

    return 0;
}
