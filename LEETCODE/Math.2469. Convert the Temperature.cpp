#include<bits/stdc++.h>
using namespace std;

vector<double> convertTemperature(double c) {
    double K = c + 273.15;
    double F = c * (9.00/5.00) + 32; 
    return {K, F};
}

int main(){
    // call here function
    double c  = 36.5;
    vector<double> output = convertTemperature(c);
    for(double d : output){
        cout << d << endl;
    }
    return 0;
}