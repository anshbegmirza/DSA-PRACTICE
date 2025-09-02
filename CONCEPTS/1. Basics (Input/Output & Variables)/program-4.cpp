//4. Take two numbers and print their product.


#include <bits/stdc++.h>

using namespace std;

int product(int a, int b){
return a*b;
}

int main (){
  
  int num1, num2;
  
  cout << "Enter first number" <<endl ;
  cin >> num1;
  
  cout << "Enter second number" << endl;
  cin >> num2;
  
  int result = product(num1, num2);
  cout << "Product of two nums is = " << result << endl;
  return 0;
}