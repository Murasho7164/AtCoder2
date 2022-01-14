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
    //207
    vector<int> a(3);
    rep(i, 3)cin >> a[i];
    sort(a.rbegin(), a.rend());

    cout << a[0] + a[1] << endl;

    return 0;
}