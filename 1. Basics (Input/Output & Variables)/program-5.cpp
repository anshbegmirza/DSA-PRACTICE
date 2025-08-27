// 5. Take two numbers and print their quotient (integer division).

#include <bits/stdc++.h>
using namespace std;

int divisor(int a, int b){
  
//   if( b != 0){
//     return a / b;
//   }
//   else 
// cout << "Enter second number greater than 0"<<endl;
// return 0;  

return (b!=0) ? a/b : 0;
}

int main (){
  
  int num1, num2;
  
  cout << "Enter first number" <<endl ;
  cin >> num1;
  
  cout << "Enter second number" << endl;
  cin >> num2;
  
  int result = divisor(num1, num2);
  // int result = num1 / num2;
  cout << result << endl;
  cout << "Division quotient int of two nums is = " << result << endl;
  return 0;
}