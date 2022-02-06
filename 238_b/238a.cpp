#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    int n; cin >> n;

    if (pow(2, n) > n * n)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
