

#include <iostream>

int main()
{
    try
    {
        std::cout << "Hello World" << std::endl;
    }
    catch (const std::exception& err)
    {
        std::cerr << "ERROR: " << err.what() << std::endl;
    }
    return 0;
}
