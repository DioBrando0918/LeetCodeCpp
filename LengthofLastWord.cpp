#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, tail = s.length() - 1;
        while (tail >= 0 and s[tail] == ' ')tail--;
        while (tail >= 0 and s[tail] != ' ') {
            length++;
            tail--;
        }
        return length;
    };
};

int main() {
    Solution solution;
    auto answer = solution.lengthOfLastWord("   fly me   to   the moon  ");
    cout << answer << endl;
    return 0;
}