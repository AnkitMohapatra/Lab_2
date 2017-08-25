#include <iostream>
using namespace std;

int main() {
float a;
cout << "Enter value in centimeters : ";
cin >> a;
cout << "Value in meters : " << a / 100 << "\nValue in kilometers : " << a/100000;
return 0;
}
