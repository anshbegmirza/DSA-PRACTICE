//  Take two numbers and print their difference. (done)

#include <bits/stdc++.h>

using namespace std;

int difference(int a, int b){

  /*
  if(a > b) {
    return a -b ;
  }
  else
  return b -a ;  
  */

  return (a>b) ? a - b : b - a;

}

int main (){
  
  int num1, num2;
  
  cout << "Enter first number" <<endl ;
  cin >> num1;
  
  cout << "Enter second number" << endl;
  cin >> num2;
  
  int result = difference(num1, num2);
  cout << "Addition of two nums is = " << result << endl;
  return 0;
}