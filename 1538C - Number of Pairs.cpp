
#include <bits/stdc++.h>
#include <iostream>
#include "random"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using cd = complex<ld>;

void solve() {
    int noman;
    cin >> noman;
    vector<int> mou(noman);
    for (int &e : mou) {
        cin >> e;
    }
    int maxhasan = max_element(mou.begin(), mou.end()) - mou.begin();
    int minabul = min_element(mou.begin(), mou.end()) - mou.begin();
    cout << min({
            max(maxhasan, minabul) + 1,
            (noman - 1) - min(maxhasan, minabul) + 1,
            (noman - 1) - maxhasan + minabul + 2,
            (noman - 1) - minabul + maxhasan + 2
    }) << "\n";
}

int main() {
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
