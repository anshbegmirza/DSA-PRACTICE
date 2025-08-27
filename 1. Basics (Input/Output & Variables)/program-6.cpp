// 6. Take two numbers and print the remainder (modulus).
#include <bits/stdc++.h>
using namespace std;

int calcRemainder( int n1, int n2){
  return (n2 != 0) ? n1 % n2 : 0;
}

int main (){
  int a,b;
  
  cout << "Enter first number:" << endl;
  cin >> a;
  
  cout << "Enter second number :" << endl;
  cin >> b;
  
  int res = calcRemainder(a,b);
  cout << "Remainder is : " << res << endl;
  return 0;
}