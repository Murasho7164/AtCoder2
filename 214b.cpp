#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    //214
    int s, t;
    cin >> s >> t;
    int count = 0;
    rep(i, s+1) {
        rep(j, s + 1) {
            rep(k, s + 1) {
                if (i + j + k <= s && i * j * k <= t)count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}