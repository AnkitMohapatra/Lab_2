#include <iostream>
#include<cmath>
using namespace std;

int main() {
float p,r,t,n;
cout << "Enter Principal Amount, Rate of Interest,Time Period & Number of Times Interest is Compounded per Year respectively : ";
cin >> p >> r >> t >> n;
cout << "Compound Interest = " << (p*(pow((1+((r/100)/n)),(n*t))))-p; 
}
