#include <iostream>

int main()
{
    int loop_times, counter;
    std::cout << "How many times should we loop? (What happens if we put in 0?) ";
    std::cin >> loop_times;

    counter = 0;
    do 
    {
        std::cout << "Loop Number " << counter + 1 << "\r\n";
        counter += 1;
    } while( counter < loop_times );
}