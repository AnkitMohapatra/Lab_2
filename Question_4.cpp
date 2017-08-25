#include <iostream>
using namespace std;

int main() {
int a;
cout << "Enter no. of days : ";
cin >> a;
cout << "Year(s) : " << a / 365 << "\nWeek(s) : " << (a % 365) / 7 << "\nDay(s) : " << ((a % 365) % 7);
return 0;
}
