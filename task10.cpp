#include <iostream>
using namespace std;

void ticketPrice(string name, int price);

main()
{string name;
 int price;
 while(true)
 {
  cout << "Enter country's name: ";
  cin >> name;
  cout << "Enter ticket price: ";
  cin >> price;
  ticketPrice(name, price);
 }
}

void ticketPrice(string name, int price)
{int output;
 int finalPrice;
 
 if (name == "Pakistan")
 {
  output = price*5/100;
  finalPrice = price - output;
  cout << "Final ticket price is: " <<finalPrice <<endl;
 }

 if (name == "Ireland")
 {
  output = price*10/100;
  finalPrice = price - output;
  cout << "Final ticket price is: " <<finalPrice <<endl;
 }

 if (name == "India")
 {
  output = price*20/100;
  finalPrice = price - output;
  cout << "Final ticket price is: " <<finalPrice <<endl;
 }
 
 if (name == "England")
 {
  output = price*30/100;
  finalPrice = price - output;
  cout << "Final ticket price is: " <<finalPrice <<endl;
 }
 
 if (name == "Canada")
 {
  output = price*45/100;
  finalPrice = price - output;
  cout << "Final ticket price is: " <<finalPrice <<endl;
 }
}
