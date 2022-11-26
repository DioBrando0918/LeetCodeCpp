#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// wrote it myself, garbage solution, runtime error
//class Solution {
//public:
//    int searchInsert(vector<int> &nums, int target) {
//        int idx = 0;
//        while (idx < nums.size()) {
//            if (nums[idx] == target){
//                nums.insert(nums.begin()+idx,target);
//                break;
//            }
//            else if (nums[idx]<target && target<nums[idx+1]){
//                nums.insert(nums.begin()+idx+1,target);
//                return idx+1;
//            }
//            else if (idx == nums.size()-1) {
//                nums.insert(nums.end(),target);
//            }
//            idx++;
//        }
//        for (auto &item:nums) {
//            cout<<item<<endl;
//        }
//        return idx;
//    }
//};

//class Solution {
//public:
//    int searchInsert(vector<int> &nums, int target) {
//        int low = 0, high = nums.size() - 1;
//        int mid = int((low + high) / 2);
//        while (low <= high) {
//            if (nums[mid] == target) return mid;
//            else if (nums[mid] > target) high = mid - 1;
//            else if (nums[mid] < target) low = mid + 1;
//            mid = int((low + high) / 2);
//        }
//        return low;
//    }
//};

// wrote it myself , another solution, slower than binary search
class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        auto iter = find(nums.begin(), nums.end(), target);
        if (iter == nums.end()) {
            nums.push_back(target);
            sort(nums.begin(), nums.end());
            iter = find(nums.begin(), nums.end(), target);
        }
        return distance(nums.begin(), iter);
    }
};

int main() {
    Solution solution;
    vector<int> v1{1, 3, 5, 6};
    const int target{2};
    auto answer = solution.searchInsert(v1, target);
    cout << answer << endl;

}