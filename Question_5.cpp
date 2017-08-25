#include <iostream>
#include<cmath>
using namespace std;

int main() {
int a,b;
cout << "Enter base & exponent respectively : ";
cin >> a >> b;
cout << a << "^" << b << "=" << pow(a,b);
return 0;
}
