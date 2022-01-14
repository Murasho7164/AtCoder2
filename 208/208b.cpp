#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int kaijo(int n) {
    int k=1;
    rep(i, n) k *= (i + 1);
    return k;
}

int main() {
    //208
    int p; cin >> p;
    int ans = 0;
    vector<int> money(10);
    rep(i, 10)money[i] = kaijo(i + 1);

    int i = 1;
    while (p > 0) {
        if(p >= money[10 - i]) {
            p -= money[10 - i];
            ans++;
        }else i++;
    }

    cout << ans << endl;

    return 0;
}