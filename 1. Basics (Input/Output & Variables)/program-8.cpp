// Swap two numbers without using a temporary variable. 
#include <bits/stdc++.h>
using namespace std ;
int swap(int a, int b){
  cout << "Before swap" << endl;
  cout << "a is = "<<a << " & b is = " << b << endl;
  // trick
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  cout << "After swap" << endl;
  cout << "a is = "<<a << " & b is = " << b << endl;
  return 0;
}

int main (){
  int n1, n2;

  cout << "Enter first number:" << endl;
  cin>>n1;
  
  cout << "Enter second number:" << endl;
  cin>>n2;
  
  swap(n1, n2);
  return 0;
}

