#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //220
    ll k, a, b;
    cin >> k >> a >> b;

    ll c=0, d=0;
    int l = 0;
    while (a != 0) {
        c += (a % 10)*pow(k,l);
        l++;
        a /= 10;
    }
    l = 0;
    while (b != 0) {
        d += (b % 10) * pow(k, l);
        l++;
        b /= 10;
    }
    cout << c*d << endl;
    return 0;
}
