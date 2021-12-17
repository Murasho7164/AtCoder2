#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //200
    ll n; cin >> n ;
    vector<ll> a(n);
    vector<ll> v(200);
    rep(i, n) {
        cin >> a.at(i);
        a.at(i) %= 200;
        v.at(a.at(i))++;
    }

    ll count = 0;
    
    rep(i, 200) {
        count += (v.at(i) * (v.at(i) - 1) / 2);
    }

    cout<<count<<endl;

    return 0;
}
