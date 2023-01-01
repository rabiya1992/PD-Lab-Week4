#include <iostream>
using namespace std;

void output(string name);

main()
{
 
  string name;
  cout << "Enter an input: ";
  cin >> name;
  output(name);
 
}

void output(string name)
{
 if (name == "true")
 { 
  cout << "false" <<endl;
 }

 if (name == "false")
 {
  cout << "true" <<endl;
 }
}
