#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int L = haystack.length(), n = needle.length(), m = L;
        for (int i = 0; i <= m - n; i++) {
            if (haystack.substr(i, n) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    string haystack = "sadbutsad";
    string needle = "sad";

    Solution solution;
    int index = solution.strStr(haystack, needle);

    cout << "Index of needle: " << index << endl;

    return 0;
}
