#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    ll n;
    cin >> n;

    if (n >= -pow(2, 31) && n < pow(2, 31))cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
