#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //165
    ll x;
    cin >> x;

    int year = 0;
    ll m = 100;
    while (m < x) {
        m += m/100;
        year++;
    }

    cout << year << endl;

    return 0;
}
