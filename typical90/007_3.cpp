#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;





int main() {
    //“TŒ^90_004
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int q; cin >> q;
    vector<int> b(q);
    rep(i, q) cin >> b[i];

    sort(a.begin(), a.end());

    rep(i, q) {
        int left = 0;
        int right = n-1;
        while (right - left > 1) {
            int mid = (left + right) / 2;
            if (b[i] < a[mid])right = mid;
            else left = mid;
        }
        cout << min(abs(b[i] - a[left]), abs(b[i] - a[right])) << endl;
    }


    return 0;
}
