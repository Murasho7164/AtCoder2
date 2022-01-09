#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //211
    vector<string> s(4), t{ "H","2B","3B","HR" };
    rep(i, 4)cin >> s[i];

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    rep(i, 4) {
        if (s[i] != t[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}