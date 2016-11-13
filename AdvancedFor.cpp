#include <iostream>

int main()
{
    int loop_times;
    std::cout << "How many times should we loop? ";
    std::cin >> loop_times;

    for( int x = 0; x < loop_times; x++ )
    {
        std::cout << "Loop Number " << x + 1 << "\r\n";
    }
}