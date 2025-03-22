#include <iostream>
#include <vector>

int main()
{
    // allocate default size array
    std::vector<int> arr;
    int count;
    int sum = 0;
    std::cout << "Enter the no of elements\n";
    std::cin >> count;
    //resize the vector to desired size. In C++, we 
    //resize the vector anytime. Changing the array size
    //in the run time.
    arr.resize(count);
    for(int i=1; i<=arr.size(); i++) {
        arr[i] = i;
        sum += arr[i];
    }
    std::cout<< "Sum of n numbers = " <<sum<<std::endl;
    return 0;
}
