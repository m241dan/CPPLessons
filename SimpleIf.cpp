#include <iostream>

int main()
{
    if( true )
    {
        std::cout << "It's true!\r\n";
        std::cout << "And as such, these two lines of code will execute.\r\n";
    }

    if( false )
    {
        std::cout << "This will not be printed!";
    }
    return 0;
}