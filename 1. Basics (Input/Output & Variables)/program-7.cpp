// Swap two numbers using a temporary variable. 

#include <bits/stdc++.h>
using namespace std ;

int swap(int a, int b){
  
  int temp = a;
  a = b;
  b = temp;
  
  cout << "Value of a is = " << a << endl;  
  cout << "Value of b is = " << b << endl;  
  return a,b;
}

int main (){
  
  int n1, n2;
  
  cout << "Enter first number:" << endl;
  cin>>n1;
  
  cout << "Enter second number:" << endl;
  cin>>n2;
  
  cout << "Before swap" << endl;
  cout << "a is = "<<n1 << " & b is = " << n2 << endl;
  cout << "After swap" << endl;
  swap(n1, n2);
  return 0;
}

