#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //231
    int n, q; cin >> n >> q;
<<<<<<< HEAD
    vector<int> a(n), x(q);
    rep(i, n)cin >> a[i];
    rep(i, q)cin >> x[i];

    int count = 0;
=======
    vector<int> a(n);
    rep(i, n)cin >> a[i];
>>>>>>> 39b14861fcbd02b90434e530cd14b0387aa3343f

    sort(a.rbegin(), a.rend());

    rep(i, q) {
<<<<<<< HEAD
        count = 0;
        rep(j, n) {
            if (a[j] >= x[i]) {
                count++;
            }
            else break;
        }
        cout << count << endl;
=======
        int x; cin >> x;
        
        cout << a.end()-lower_bound(a.begin(),a.end(),x) << endl;
>>>>>>> 39b14861fcbd02b90434e530cd14b0387aa3343f
    }

    return 0;
}