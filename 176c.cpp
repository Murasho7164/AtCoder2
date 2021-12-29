#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //176
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n)cin >> a[i];
    int max = a[0];
    ll f = 0;

    rep(i, n) {
        if (a[i] < max) {
            f +=ll( max - a[i]);
        }
        else {
            max = a[i];
        }
    }

    cout <<f<<endl;

    return 0;
}