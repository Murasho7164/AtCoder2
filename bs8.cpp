#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //200
    int n; cin >> n;
    vector<int> d(n);
    rep(i, n)cin >> d[i];
    int count = 1;

    sort(d.begin(), d.end());

    rep(i, n-1) {
        if (d[i] < d[i + 1]) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
