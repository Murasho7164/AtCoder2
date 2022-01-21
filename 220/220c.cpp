#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //220
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    rep(i, n) {
        cin >> a[i];
        sum += a[i];
    }
    ll x;
    cin >> x;
    
    ll l = x / sum;
    int r=x-sum*l;

    int count = 0;
    while (r >= 0) {
        r -= a[count];
        count++;
    }
    cout << n * l + count;

    return 0;
}
