#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //232
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n)cin >> a[i];
    vector<bool> b(n);
    rep(i, n) b[i] = false;
    int f = x - 1, count = 0;

    while (!b[f]) {
        b[f] = true;
        count++;
        f = a[f]-1;
    }

    cout << count << endl;

    return 0;
}