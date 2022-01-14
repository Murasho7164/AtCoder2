#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //205
    int a, b, c;
    cin >> a >> b >> c;
    char ans='=';

    if (c % 2 == 0) {
        if (abs(a) > abs(b))ans = '>';
        else if(abs(a) < abs(b))ans = '<';
    }
    else {
        if (a > b)ans = '>';
        else if (a < b)ans = '<';
    }

    cout << ans << endl;

    return 0;
}
