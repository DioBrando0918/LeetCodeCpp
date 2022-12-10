#include <iostream>
#include <math.h>

using namespace std;

//wrote it myself , passed , but too slow
class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x; //for 1,0
        for (int i = 1; i <= x; ++i) {
            if (pow(i, 2) > x) return  i -1;
        }
        return 0;
    }
};

int main(){
    Solution solution;
    auto answer = solution.mySqrt(1);
    cout<<answer<<endl;
}