// 11. Check if a number is even or odd.

#include <bits/stdc++.h>
using namespace std ;

string checkOddEven(int n){
  
  return (n%2 == 0) ? "even" : "odd" ;
  
}

int main (){
  
  int c1;
  cout << "Enter your number" <<endl;
  cin >> c1;
  
  string res =  checkOddEven(c1);
 cout << "the number is " << res << endl;
  return 0;
}

