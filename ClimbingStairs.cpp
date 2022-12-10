#include <iostream>
#include <map>

using namespace std;

//if n is large , is will time limit exceeded
//class Solution {
//public:
//    int climbStairs(int n) {
//        if (n == 0) return 0;
//        if (n == 1) return 1;
//        if (n == 2) return 2;
//        if (n == 3) return 3;
//        if (n == 4) return 5;
//        return climbStairs(n - 1) + climbStairs(n - 2);
//    }
//};

class Solution {
public:
    int climbStairs(int n) {
        map<int, int> map{{0, 0},
                          {1, 1},
                          {2, 2}};

        for (int i = 3; i <= n ; ++i) {
            map[i] = map[i-1]+map[i-2];
        }
        return map[n];
    }
};

int main() {
    Solution solution;
    auto answer = solution.climbStairs(4);
    cout << answer << endl;
}