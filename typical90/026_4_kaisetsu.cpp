#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    //kaisetsu
    int n;
    cin >> n;
    vector<int> a(n - 1), b(n - 1);
    rep(i, n-1) cin >> a[i] >> b[i];

    vector<vector<int>> g(n);
    vector<int> d(n,-1);
    rep(i, n-1) {
        g[a[i] - 1].push_back(b[i] - 1);
        g[b[i] - 1].push_back(a[i] - 1);
    }
    queue<int> q;
    int cnt0 = 1, cnt1 = 0;
    q.push(0);
    d[0] = 0;

    while (!q.empty()) {
        int pos = q.front();
        q.pop();
        rep(i, g[pos].size()) {
            int nex = g[pos][i];
            if (d[nex] == -1) {
                if (d[pos] == 0) {
                    d[nex] = 1;
                    cnt1++;
                }
                else if (d[pos] == 1) {
                    d[nex] = 0;
                    cnt0++; 
                }
                q.push(nex);
            }
            if (cnt0 >= n / 2||cnt1>=n/2) goto answer;

        }
    }

answer:
    if (max(cnt0, cnt1) == cnt0) {
        rep(i, n) {
            if (d[i] == 0) {
                if (i != 0) cout << " ";
                cout << i + 1 << " ";
            }
        }
    }
    else {
        rep(i, n) {
            if (d[i] == 1) {
                if (i != 0) cout << " ";
                cout << i + 1 << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
