#include <iostream>
using namespace std;

int findClosest(int x, int y, int z) {
        // t1 x=2 y=7 & z=4
        int dist1, dist2,res = 0;
        dist1 = z>x ? z-x : x-z;
        dist2 = z>y ? z-y : y-z;
        
        if(dist1 > dist2){
            res= 1;
        }else if( dist2 > dist1){
            res= 2;
        } 
        if(dist1==dist2){
            res= 0;
        }
        return res;
    }


int main() 
{
    int res = findClosest(2,7,4);
    cout << res << endl;
    return 0;
}