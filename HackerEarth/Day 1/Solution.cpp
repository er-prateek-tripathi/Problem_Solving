#include<bits/stdc++.h>
using namespace std;

using namespace std;

int countFavoriteSingers(const vector<int>& playlist) {
    unordered_map<int, int> singerCounts;
    for (int singer : playlist) {
        singerCounts[singer]++;
    }

    int maxCount = 0;
    for (auto& countPair : singerCounts) {
        maxCount = max(maxCount, countPair.second);
    }

    int favoriteSingers = 0;
    for (auto& countPair : singerCounts) {
        if (countPair.second == maxCount) {
            favoriteSingers++;
        }
    }

    return favoriteSingers;
}

int main() {
    int n;
    cin >> n;

    vector<int> playlist(n);
    for (int i = 0; i < n; ++i) {
        cin >> playlist[i];
    }

    int result = countFavoriteSingers(playlist);
    cout << result << endl;

    return 0;
}
