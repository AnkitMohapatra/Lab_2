#include <iostream>
#include<cmath>
using namespace std;

int main() {
float p,r,t,n;
cout << "Enter Principal Amount, Rate of Interest,Time Period & Number of Times Interest is Compounded per Year respectively : ";
cin >> p >> r >> t >> n;
cout << "Compound Interest = " << pow((p*(r/n)),(n*t)); 
}
