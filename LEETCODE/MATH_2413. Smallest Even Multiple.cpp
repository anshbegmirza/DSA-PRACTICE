// MATH_2413. Smallest Even Multiple.cpp


class Solution {
public:
    int smallestEvenMultiple(int n) {
        // n%2 == 0 ? return n : return 2 * n;
        if(n%2 == 0){
            return n;
        }
        else return 2*n;
    }
};