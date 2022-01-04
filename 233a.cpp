#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //233
    int x, y;
    cin >> x >> y;

    int ans = 0;
    while (y > x + ans * 10)ans++;

    cout << ans << endl;

    return 0;
}