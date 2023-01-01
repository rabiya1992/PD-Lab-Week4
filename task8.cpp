#include <iostream>
using namespace std;

void isEqual(int x, int y);

main()
{
 int x;
 int y;
 cout << "Enter first integer: ";
 cin >> x;
 cout << "Enter second integer: ";
 cin >> y;
 isEqual(x,y);
}


void isEqual(int x, int y)
{
 if(x == y)
 {
  cout << "True";
 }
 
 if(x != y)
 {
  cout << "False";
 }
}
