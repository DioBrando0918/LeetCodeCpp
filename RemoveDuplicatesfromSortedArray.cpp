#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public :
    int removeDuplicates(vector<int> &nums) {
        int idx = 0;
        int duplicates = 0;
        while (idx < nums.size() - 1) {
            if (nums[idx] == nums[idx + 1]) {
                nums.erase(nums.begin() + idx);
                idx -= 1;
            }
            idx += 1;
        }
        return nums.size();
    }
};

int main() {
    Solution solution;
    vector<int> v1{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    auto answer = solution.removeDuplicates(v1);
    cout << answer << endl;
    return 0;
}