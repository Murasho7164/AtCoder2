#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //216
    ll n; cin >> n;
    string ans = "\0";
    while (n != 1) {
        if (n % 2 == 0) ans = "B" + ans;
        else ans = "BA" + ans;
        n /= 2;
    }
    ans = "A" + ans;

    cout << ans << endl;

    return 0;
}