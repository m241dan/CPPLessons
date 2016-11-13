#include <iostream>

int main()
{
    int loop_times, counter;
    std::cout << "How many times should we loop? (What happens when we input 0?) ";
    std::cin >> loop_times;

    counter = 0;
    while( counter < loop_times )
    {
        std::cout << "Loop Number " << counter + 1 << "\r\n";
        counter += 1;
    }
}