#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //135
    int n; cin >> n;
    vector<int> p(n),q(n);
    rep(i, n) cin >> p[i];

    rep(i, n) q[i] = i + 1;

    int count = 0;

    rep(i, n) {
        if (p[i] != q[i])count++;
    }

    if (p == q)cout <<"YES" << endl;
    else if(count==2)cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}