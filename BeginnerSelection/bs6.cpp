#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //bs
    int n, a, b;
    cin >> n >> a >> b;
    ll sum = 0;
    int p=0;
    int tmp;

    rep(i, n + 1) {
        tmp = i;
        p = 0;
        while(tmp>0) {
            p += tmp % 10;
            tmp /= 10;
        }
        if (a <= p && p <= b) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}