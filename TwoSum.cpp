#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

//class Solution {
//public:
//    vector<int> twoSum(vector<int> &nums, int target) {
//        vector<int> answer;
//        for (int i = 0; i < nums.size(); ++i) {
//            if (*(find(nums.begin(), nums.end(), target - nums[i]))) {
//                answer.push_back(i);
//                for (int j = 0; j < nums.size(); ++j) {
//                    if (nums[j] == target - nums[i]){
//                        answer.push_back(j);
//                        return answer;
//                    }
//                }
//            }
//        }
//        return {};
//    }
//};


class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int,int>m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.count(target - nums[i])) return {m[target - nums[i]],i};
            else m[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {7, 2, 11, 15};
    auto answer = solution.twoSum(nums, 9);
    for (auto &ans: answer) {
        cout << ans << endl;
    }
}