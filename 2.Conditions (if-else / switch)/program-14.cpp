// 14. Find the largest of three numbers.
#include <iostream>
using namespace std;

int largestFrom3Nos(int a, int b, int c){
  
  if(a>=b && a >= c){
    cout << "A is Greatest" << a << endl;
  } else if (b >= a && b >=c){
    cout << "B is greatest" << b << endl;
  }else {
    cout << "c is greatest" << c << endl;
  }
  return 0;
}

int main() 
{
   int n1=14;
   int n2=7;
   int n3=9;
  int res = largestFrom3Nos(n1,n2,n3);
  
  cout << "Result is:"<< res << endl;
  
    return 0;
}