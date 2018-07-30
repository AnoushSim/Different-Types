#include <iostream>

int main()
{
    const int size = 3;
    void* arr[size];
    arr[0] = new int(10);
    arr[1] = new double(3.14);
    arr[2] = new char('a');
    
    std::cout << "Your array is:\n";
    std::cout << *(int*)arr[0]<<std::endl;
    std::cout << *(double*)arr[1]<<std::endl;
    std::cout << *(char*)arr[2]<<std::endl;
    
    return 0;
    
}
