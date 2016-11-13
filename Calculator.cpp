#include <iostream>

using namespace std;

int main()
{
   int input;
   double left_hand;
   double right_hand;

   //prompt the user
   cout << "Menu:\r\n1.) Addition\r\n2.) Subtract\r\n3.) Multiplication\r\n4.) Divide\r\n5.) Exit\r\nPlease pick an option: ";

   do
   {
      //take input from user
      cin >> input;

      switch( input )
      {
         default:
            cout << "Invalid input, please select again: ";
            break;
         case 1:
            cout << "Enter the left hand input: ";
            cin >> left_hand;
            cout << "Enter the right hand input: ";
            cin >> right_hand;
            cout << "The answer is: " << left_hand + right_hand << "\r\n";
            break;
         case 2:
            cout << "Enter the left hand input: ";
            cin >> left_hand;
            cout << "Enter the right hand input: ";
            cin >> right_hand;
            cout << "The answer is: " << left_hand - right_hand << "\r\n";
            break;
         case 3:
            cout << "Enter the left hand input: ";
            cin >> left_hand;
            cout << "Enter the right hand input: ";
            cin >> right_hand;
            cout << "The answer is: " << left_hand * right_hand << "\r\n";
            break;
         case 4:
            cout << "Enter the left hand input: ";
            cin >> left_hand;
            cout << "Enter the right hand input: ";
            cin >> right_hand;
            cout << "The answer is: " << left_hand / right_hand << "\r\n";
            break;
         case 5:
            cout << "Exiting program.\r\n";
            break;
      }


   }
   while( input != 5 );

   return 0;
}
