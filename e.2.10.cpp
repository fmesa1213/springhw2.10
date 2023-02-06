
/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: E2.10
Wrote a program that asks the user to input: The number of gallons of gas in the tank, 
The fuel efficiency in miles per gallon, The price of gas per gallon and 
Then print the cost per 100 miles and how far the car can go with the gas in the tank.
*/

#include <iostream>
using namespace std;

int main ()
{
  double gas;
  double fuel;
  double price;
  double far;
  double cost;
  
  cout << " Input the number of gallons of gas in the tank: " << endl;
  cin >> gas;
  
  cout << " Input the fuel efficiency in miles per gallon: " << endl;
  cin >> fuel;
  
  cout << " Input the price of gas per gallon: " << endl;
  cin >> price;
  
  far = gas * fuel;
  cost = (100/fuel) * price;
  
  cout << " The car can go for " << far << " miles with the gas in the car. "<<endl;

  cout << " The cost per 100 miles is " << cost << " dollars. "<<endl;

return 0;
  
}
