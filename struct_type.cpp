#include <iostream>

struct type {
    std::string _type;
    void*  address;
};

int main()
{
    type typical[5];
    typical[0]._type = "int";
    typical[1]._type = "int";
    typical[2]._type = "char";
    typical[3]._type = "char";
    typical[4]._type = "double";
    
    for (int ix  = 0; ix < 5; ++ix ) {
        if (typical[ix]._type == "int") {
            typical[ix].address = new int(ix);
        }
        else if (typical[ix]._type == "double") {
            typical[ix].address = new double(3.14 * ix);
        }
        else if (typical[ix]._type == "char") {
            typical[ix].address = new char('a');
        }
    }
    
    for (int ix  = 0; ix < 5; ++ix ) {
        if (typical[ix]._type == "int") {
            std::cout << *(int*)typical[ix].address << std::endl;
        }
        else if (typical[ix]._type == "double") {
            std::cout << *(double*)typical[ix].address << std::endl;
        }
        else if (typical[ix]._type == "char") {
            std::cout << *(char*)typical[ix].address << std::endl;
        }
    }    
    return 0;
    }
