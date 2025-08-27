//  Take two integers as input and print their sum. (done)

#include <bits/stdc++.h>

using namespace std;

int sum (int a, int b){
  return a+b;
}

int main (){
  
  int num1, num2;
  
  cout << "Enter first number" <<endl ;
  cin >> num1;
  
  cout << "Enter second number" << endl;
  cin >> num2;
  
  int result = sum(num1, num2);
  cout << "Addition of two nums is = " << result << endl;
  return 0;
}