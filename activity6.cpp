#include <iostream>
using namespace std;

int main(){
  string state, city, street, zip;
  cout << "Enter your street address: " << endl;
  cin >> street;
  cout << "Enter your city: " << endl;
  cin >> city;
  cout << "Enter your state: " << endl;
  cin >> state;
  cout << "Enter your zip code: " << endl;
  cin >> zip;
  cout << street << endl;
  cout << city << ", " << state << ", " << zip;
  return 0;
}
