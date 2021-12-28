#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    //228
    ll n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, n) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        p[i] = p1 + p2 + p3;
    }
    vector<int> q(n); q = p;
    sort(q.rbegin(), q.rend());

    rep(i, n) {
        if (p[i] + 300 >= p[k - 1])cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}