#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //151
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n - 1);
    int sum = 0;
    rep(i, n - 1) {
        cin >> a[i];
        sum += a[i];
    }
    if (n * m - sum > k)cout << -1 << endl;
    else if(n * m - sum<0)cout << 0 << endl;
    else cout << n * m - sum << endl;

    return 0;
}