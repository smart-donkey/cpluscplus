#include<iostream>
#include<complex>

using namespace std;
constexpr double square(double x){
  return x * x;
}

void print_data(double x){
  cout << " double " << x << " is " << square(x) << "\n";
}


int main() 
{
 print_data(1.2);
 cout << "size of char is" << sizeof(char) << "\n";
 double x = 0;
 -x;
 cout << "x: " << x << "\n";
 double d2 {2.3};
 double d1 {2.3};
 complex<double> z = 1;
 complex<double> z2 {d2, d1};
 complex<double> z3 = {1,2};
 cout << d2 << d1 << z << z2 << z3 << "\n";
 const int c_v = 17;
 constexpr double max1 = 1.4 * square(c_v);
 cout << max1 << "\n";
}
