#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //216
    int n; cin >> n;
    vector<string> s(n), t(n);
    rep(i, n)cin >> s[i] >> t[i];

    rep(i, n)s[i] =s[i]+"0"+ t[i];

    sort(s.begin(), s.end());

    rep(i, n-1) {
        if (s[i] == s[i + 1]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}