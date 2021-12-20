#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //231
    int n; cin >> n;
    vector<string> s(n);
    rep(i, n)cin >> s[i];

    sort(s.begin(), s.end());
    vector<pair<int, string>> hyo(n);
    hyo[0].first = 1;
    hyo[0].second = s[0];
    int a = 0;

    rep(i, n-1) {
        if (s[i] == s[i + 1])
            hyo[a].first++;
        else {
            a++;
            hyo[a].first = 1;
            hyo[a].second = s[i+1];
        }
    }

    sort(hyo.begin(), hyo.end());
    cout << hyo[n - 1].second << endl;

    return 0;
}