#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool is_anagram(const string& s, const string& t) {
    if (s.length() != t.length()) {
        return false;
    }

    // Check if both strings contain only letters using a loop:
    for (char c : s) {
        if (!isalpha(c)) {
            return false;
        }
    }
    for (char c : t) {
        if (!isalpha(c)) {
            return false;
        }
    }

    unordered_map<char, int> char_counts;
    for (char c : s) {
        ++char_counts[c];
    }

    for (char c : t) {
        if (--char_counts[c] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1 = "anagram";
    string s2 = "nagaram";
    string s3 = "rat";
    string s4 = "car";

    cout << s1 << " and " << s2 << " are anagrams? " << (is_anagram(s1, s2) ? "Yes" : "No") << endl;
    cout << s3 << " and " << s4 << " are anagrams? " << (is_anagram(s3, s4) ? "Yes" : "No") << endl;

    return 0;
}
