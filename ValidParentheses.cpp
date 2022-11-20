#include <iostream>
#include <map>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.size() <= 1) return false;
        string left = "({[";
        map<char, char> map = {
                {')','('},
                {'}','{'},
                {']','['}
        };
        stack<char>stack;
        for (auto &i:s) {
            if (left.find(i) != string::npos) stack.push(i);
            else{
                if (stack.empty() or map[i] !=  stack.top()) return false;
                stack.pop();
            }
        }
        if (stack.empty()) return true;
        else return false;
    }
};

int main() {
    Solution solution;
    auto answer = solution.isValid("[");
    cout<<answer<<endl;
}