#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //194
    int a, b;
    cin >> a >> b;
    int ans;

    if (a + b >= 15 && b >= 8)ans = 1;
    else if (a + b >= 10 && b >= 3)ans = 2;
    else if (a + b >= 3)ans = 3;
    else ans = 4;

    cout << ans << endl;

    return 0;
}