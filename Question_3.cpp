#include <iostream>
using namespace std;

int main() {
float a;
cout << "Enter value in farhenheit : ";
cin >> a;
cout << "Value in celsius : " << ((a - 32) / 9) * 5;
return 0;
}
