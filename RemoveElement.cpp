#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int idx = 0;
        while (idx <  nums.size()) {
            if (nums[idx] == val) {
                nums.erase(nums.begin() + idx);
                idx -= 1;
            }
            idx+=1;
        }
        return nums.size();
    }
};

int main() {
    vector<int> v{3, 2, 2, 3};
    Solution solution;
    auto answer = solution.removeElement(v, 3);
    cout << answer << endl;
}