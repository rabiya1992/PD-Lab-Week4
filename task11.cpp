#include <iostream>
using namespace std;

void carSpeed(int number);

main()
{
  int number;
  cout << "Enter speed: ";
  cin >> number;
  carSpeed(number);
}

void carSpeed(int number)
{if (number == 100)
 {
  cout << "Perfect! You're going good" <<endl;
 }
 
 if (number < 100)
 {
  cout << "Perfect! You're going good" <<endl;
 }

 if (number > 100)
 {
  cout << "Halt....YOU WILL BE CHALLANGED!!!" <<endl;
 }

}