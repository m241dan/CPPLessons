#include <iostream>

int main()
{
    if( false )
    {
        std::cout << "This won't be executed.\r\n'";
    }
    else if( true )
    {
        std::cout << "This is how a simple else if works!\r\n";
    }
}