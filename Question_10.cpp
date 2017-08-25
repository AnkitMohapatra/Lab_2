#include <iostream>
#include<cmath>
using namespace std;

int main() {
float a,b,c,d,e,f;
cout << "Enter marks of 5 subjects respectively  : ";
cin >> a >> b >> c >> d >> e;
cout << "Enter maximum marks of each subject : ";
cin >> f;
cout << "Total = " << a+b+c+d+e << "\nAverage = " << (a+b+c+d+e)/5 << "\nPercentage = " << (((a+b+c+d+e)/5)/f)*100;
return 0;
}
