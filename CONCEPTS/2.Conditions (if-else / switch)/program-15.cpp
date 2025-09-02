// 15. Check if a year is a leap year.
#include <iostream>
using namespace std;

string checkForLeapYear(int days){
  return (days % 2 == 0) ? "It is leap year" : "It is not leap year";
}

int main() 
{
  int days = 366;
  string res =  checkForLeapYear(days);
  
  cout << "Result is : "<< res << endl;
  
    return 0;
}