#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //231
    int n, q; cin >> n >> q;

    vector<int> a(n), x(q);
    rep(i, n)cin >> a[i];
    rep(i, q)cin >> x[i];

    int count = 0;
    vector<int> a(n);
    rep(i, n)cin >> a[i];


    sort(a.rbegin(), a.rend());

    rep(i, q) {

        count = 0;
        rep(j, n) {
            if (a[j] >= x[i]) {
                count++;
            }
            else break;
        }
        cout << count << endl;

        int x; cin >> x;
        
        cout << a.end()-lower_bound(a.begin(),a.end(),x) << endl;

    }

    return 0;
}