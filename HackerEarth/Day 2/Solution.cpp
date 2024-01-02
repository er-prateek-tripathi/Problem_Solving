#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_max_border(const vector<string>& table) {
   int n = table.size();
   int m = table[0].size();
   int max_border = 0;

   // Check rows and columns for maximum consecutive black cells
   for (int i = 0; i < n; ++i) {
       max_border = max(max_border, max_consecutive_black(table[i]));
   }

   for (int j = 0; j < m; ++j) {
       string col;
       for (int i = 0; i < n; ++i) {
           col += table[i][j];
       }
       max_border = max(max_border, max_consecutive_black(col));
   }

   return max_border;
}

int max_consecutive_black(const string& cells) {
   int count = 0;
   int max_count = 0;
   for (char cell : cells) {
       if (cell == '#') {
           count++;
           max_count = max(max_count, count);
       } else {
           count = 0;
       }
   }
   return max_count;
}

int main() {
   int t;
   cin >> t;

   for (int _ = 0; _ < t; ++_) {
       int n, m;
       cin >> n >> m;

       vector<string> table(n);
       for (int i = 0; i < n; ++i) {
           cin >> table[i];
       }

       int max_border = find_max_border(table);
       cout << max_border << endl;
   }

   return 0;
}
