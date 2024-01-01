#include<bits/stdc++.h>
using namespace std;

string mergeStrings(string word1, string word2) {
  string mergedString = "";
  int i = 0, j = 0;

  while (i < word1.length() || j < word2.length()) {
    if (i < word1.length()) {
      mergedString += word1[i];
      i++;
    }
    if (j < word2.length()) {
      mergedString += word2[j];
      j++;
    }
  }

  return mergedString;
}

int main() {
  string word1 = "abc";
  string word2 = "pqr";

  string mergedString = mergeStrings(word1, word2);

  cout << "Merged string: " << mergedString << endl;  // Output: apbqcr

  return 0;
}
