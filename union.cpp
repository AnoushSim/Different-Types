#include <iostream>

union type
{
    int _int;
    double _double;
    long _long;
    char _string[30];
};

int main()
{
    type asint;
    std::cin >> asint._int;
    
    type asdoub;
    std::cin >> asdoub._double;
    
    type aslong;
    std::cin >> aslong._long;
    
    type asstr;
    std::cin >> asstr._string;
    
    return 0;
    
}
