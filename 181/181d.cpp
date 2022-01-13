#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //181
    //Osii Muri
    string s; cin >> s;
    vector<int> keta{0,0,0,0,0,0};
    rep(i, s.length()) {
        keta.at(i) = (int)(s[i] - '0');
    }
    do {
        if ((4 * keta.at(0) + 2 * keta.at(1) + keta.at(2)) % 8 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(keta.begin(), keta.end()));

    cout << "No" << endl;

    return 0;
}
