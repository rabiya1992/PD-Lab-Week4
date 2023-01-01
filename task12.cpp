#include <iostream>
using namespace std;

void totalPrice(float price);

main()
{float num1;
 float num2;
 float num3;
 float price;
 float redRose = 2.00;
 float whiteRose = 4.10;
 float Tulips = 2.50;
 cout << "No of Red Rose: ";
 cin >> num1;
 cout << "No of White Rose: ";
 cin >> num2;
 cout << "No of Tulips: ";
 cin >> num3;
 price = (num1*redRose)+(num2*whiteRose)+(num3*Tulips);
 totalPrice(price);
}

void totalPrice(float price)
{
 if (price > 200)
 {float output;
  float Finalprice;
  output = price*20/100;
  Finalprice = price-output;
  cout << "Original Price: " <<price <<endl;
  cout << "Price after discount is: " <<Finalprice <<endl;
 }
}
 
 