#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //217
    vector<string> s(3);
    rep(i, 3) cin >> s[i];
    vector<string> t = { "ABC","AGC","AHC","ARC" };
    sort(s.begin(), s.end());
    rep(i, 3) {
        rep(j, 4) {
            if (s[i] != t[i]) {
                cout << t[i] << endl;
                return 0;
            }

        }
    }

    cout << t[3] << endl;
  

    return 0;
}