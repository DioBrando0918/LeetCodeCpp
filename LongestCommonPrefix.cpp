#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());
        int i = 0;
        for (; i < min(strs[0].size(),strs.back().size()); ++i) {
            if (strs[0][i] != strs.back()[i]) break;
        }
        return strs[0].substr(0,i);
    }
};

int main() {
    Solution solution;
    vector<string> strs = {"flower","flow","flight"};
    auto answer = solution.longestCommonPrefix(strs);
    cout<<answer<<endl;
}