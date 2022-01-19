#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //166
    int n, k;
    cin >> n >> k;
    int d;
    vector<bool> b(n, false);
    rep(i, k) {
        cin >> d;
        rep(j, d) {
            int tmp;
            cin >> tmp; 
            b[tmp-1] = true;
        }
    }
    
    int count = 0;
    rep(i, n) {
        if (!b[i])count++;
    }
    cout << count << endl;

    return 0;
}
