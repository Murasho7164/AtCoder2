#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //95
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    int ans = 0;
    int mins = 1001;
    rep(i, n) {
        cin >> m[i];
        x -= m[i];
        ans++;
        mins = min(mins, m[i]);
    }
    while (x >= mins) {
        x -= mins;
        ans++;
    }

    cout << ans << endl;

    return 0;
}