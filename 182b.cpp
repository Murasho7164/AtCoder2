#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //182
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int count = 0;
    int maxCount = 0;
    int ans = 0;
    For(i, 2, 1001) {
        count = 0;
        rep(j, n) {
            if (a[j] % i == 0) {
                count++;
            }
        }
        if (maxCount <= count) {
            ans = i;
            maxCount = count;
        }
    }
    cout << ans << endl;

    return 0;
}
