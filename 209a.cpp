#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //209
    int a, b; cin >> a >> b;

    if (a > b) {
        cout << 0 << endl;
        return 0;
    }

    cout << b - a + 1 << endl;

    return 0;
}
