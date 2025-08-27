//Find the size of int, float, double, and char using sizeof(). 

#include <bits/stdc++.h>
using namespace std ;

int main (){
  
  int n1 = 10;
  float n2 =2.3;
  double n3 = 5.9;
  char c1 = 'a';
  
  cout << "Sie of int is = " << sizeof(n1) << " bytes" << endl;
  cout << "Sie of float is = " << sizeof(n2) << " bytes" << endl;
  cout << "Sie of double is = " << sizeof(n3) << " bytes" << endl;
   cout << "Sie of char is = " << sizeof(c1) << " bytes" << endl;
  return 0;
}

