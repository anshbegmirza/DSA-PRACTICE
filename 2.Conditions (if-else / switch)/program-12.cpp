// 12. Check if a number is positive, negative, or zero.

#include <bits/stdc++.h>
using namespace std ;

string checkZeroPosNeg(int n){
 
 if( n == 0) {
   return "zero";
 } else if (n < 0){
   return "negative";
 } else {
   return "positive";
 }
}

int main (){
  
  int c1;
  cout << "Enter your number" <<endl;
  cin >> c1;
  
  string res =  checkZeroPosNeg(c1);
 cout << "the number is " << res << endl;
  return 0;
}


