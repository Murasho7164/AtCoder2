#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //191
    int v, t, s, d;
    cin >> v >> t >> s >> d;

    if (v * t <= d && d <= v * s)cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}
