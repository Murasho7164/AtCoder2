#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //204
    int x, y;
    cin >> x >> y;
    int ans;
    if (x == y)ans = x;
    else ans = 3 - x - y;

    cout << ans << endl;

    return 0;
}