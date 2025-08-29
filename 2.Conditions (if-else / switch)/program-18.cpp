// 18. Find the grade of a student given marks (A/B/C/D/F).

#include <bits/stdc++.h>
using namespace std;

void printGrade(int marks){
   if(marks < 30){
    cout << "Grade F" << endl;
   } else if (marks > 30 && marks < 49){
    cout << "Grade D" << endl;
   } else if (marks > 49 && marks < 59){
    cout << "Grade C" << endl;
   } else if (marks > 59 && marks < 69){
    cout << "Grade B" << endl;
   } else {
    cout << "Grade A" << endl;
   }
}

int main (){
    int marks;
    cout << "Enter marks to check" << endl ;
    cin >> marks;

    printGrade(marks);
    return 0;
}