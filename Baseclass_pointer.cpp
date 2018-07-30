#include <iostream>

class type
{
public:
    virtual void print() = 0;
};

class INT : public type
{
    int m_int;
    
public:

    INT (int value) : m_int(value) {};
    virtual void  print() override 
    {
        std::cout << m_int <<std::endl;
        
    }
};

class DOUBLE : public type
{
    double m_double;
    
public:

    DOUBLE (double value) : m_double(value) {};
    virtual void  print() override 
    {
        std::cout << m_double <<std::endl;
        
    }
};

class Point : public type
{
    int x;
    int y;
    
public:
 
    Point (int val1, int val2) : x(val1) , y(val2) {};
    virtual void  print() override 
    {
        std::cout << "(" << x << "," << y << ")" << std::endl;
        
    }
};

int main()
{
    type* arr[3];
    arr[0] = new INT(4);
    arr[1] = new DOUBLE(2.1);
    arr[2] = new Point(1,1);
    
    arr[0]->print();
    arr[1]->print();
    arr[2]->print();
    
    return 0;
}
