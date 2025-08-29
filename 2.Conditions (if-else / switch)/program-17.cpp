// 17. Check if a character is uppercase, 
// lowercase, digit, or special character. .

#include <bits/stdc++.h>
using namespace std;

void checkTypeOfC(char c){
  
  if(isupper(c)){
    cout << "Given char is uppercase" << endl;
  } else if (islower(c)){
    cout << "Given char is lowercase" << endl;
  } else if (isdigit(c)){
    cout << "Given char is Digit" << endl;
  } else {
    cout << "Given char is a special char" << endl;
  }
}


int main(){
  char c;
  cout << "Enter a character you want to check !" << endl;
  cin >> c;

  checkTypeOfC(c);
  return 0;
}