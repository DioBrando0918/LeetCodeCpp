#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x != 0 and x % 10 == 0) return false;
        int reverse = 0;
        while (x > reverse) {
            reverse = reverse * 10 + x % 10;
            x = x / 10;
        }
        if (x == reverse or x == reverse / 10) return true;
        else return false;
    }
};

int main() {
    Solution solution;
    auto ans = solution.isPalindrome(10);
    cout << ans << endl;
}