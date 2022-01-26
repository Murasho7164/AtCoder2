#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;


int main() {
    //“TŒ^90_003
    //•”•ª“_‚®‚ç‚¢‚Ís‚¯‚é
    int n; cin >> n;
    vector<int> a(n - 1), b(n - 1);
    vector<vector<int>> g(n);
    rep(i, n - 1) {
        cin >> a[i] >> b[i];
        g[a[i] - 1].push_back(b[i] - 1);
        g[b[i] - 1].push_back(a[i] - 1);
    }

    int m = 0;
    rep(i, n) {
        queue<int> q;
        vector<int> dist(n, -1);
        q.push(i);
        dist[i] = 0;
        while (!q.empty()) {
            int pos = q.front();
            q.pop();
            rep(j, g[pos].size()) {
                int nex = g[pos][j];
                if (dist[nex] == -1) {
                    dist[nex] = dist[pos] + 1;
                    q.push(nex);
                }
            }
        }
        rep(j, n) {
            m = max(m, dist[j]);
        }
    }
    cout << m+1 << endl;

    return 0;
}
