#include <iostream>
#include <cstdlib>

int main()
{
    srand( time( NULL ) ); //initializing the seed
    int number = rand() % 10 + 1; // generating a random number
    std::cout << number << "\r\n";
    switch( number )
    {
        default:
            std::cout << "This number is either 5 or anything greater than 6.\r\n";
            break;
        case 1:
            std::cout << "The number is 1.\r\n";
            break;
        case 2:
            std::cout << "The number is 2.\r\n";
            break;
        case 3:
            std::cout << "The number is 3.\r\n";
            break;
        case 4:
        case 6:
            std::cout << "The number is 4.\r\n";
            std::cout << "Without the break statement, on a 4, this following case will execute. This is a clever was to capture many cases in a switch.\r\n";
            break;
    }
}