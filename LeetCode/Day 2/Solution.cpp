#include <iostream>
#include <string>

using namespace std;

char find_the_diff(const string& s, const string& t) {
    char result = 0;
    for (char c : s + t) {
        result ^= c;  // XOR each character's ASCII value
    }
    return result;  // The remaining character is the added one
}

int main() {
    string s = "abcd";
    string t = "abcde";
    char added_letter = find_the_diff(s, t);
    cout << "The letter that was added to t is: " << added_letter << endl;
    return 0;
}
