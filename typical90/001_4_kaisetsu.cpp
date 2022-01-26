#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;


int main() {
    //“TŒ^90_001
    //‰ðà
    int n, L, k;
    cin >> n >> L >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int l = -1;
    int r = L;

    while (r - l > 1) {
        int mid = (l + r) / 2;
        bool ok;
        int count = 0, pre = 0;
        rep(i, n) {
            if (a[i] - pre >= mid && L-1 - a[i] >= mid) {
                count++;
                pre = a[i];
            }
        }
        if (count >= k)ok = true;
        else ok = false;

        if (!ok) r = mid;
        else l = mid;
    }

    cout << l << endl;;


    return 0;
}
