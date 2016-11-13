#include <iostream>

int main()
{
    if( false )
    {
        std::cout << "Won't get executed.\r\n";
    }
    else if( false )
    {
        std::cout << "Also won't get executed.\r\n";
    }
    else
    {
        std::cout << "The else is a catchall, if will get called if the previous boolean checks are false.\r\n";
    }
}