#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int idx = digits.size()-1;
        while (idx>=0){
            if (digits[idx] == 9) digits[idx] = 0;
            else{
                digits[idx]+=1;
                return digits;
            }
            idx --;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

int main() {
    Solution solution;
    vector<int> v = {4, 3, 9, 9};
    auto answer = solution.plusOne(v);
    for (auto &item:answer) {
        cout<<item<<endl;

    }
}