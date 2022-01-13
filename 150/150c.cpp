#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //150
    int n; cin >> n;
    vector<int> p(n), q(n);
    rep(i, n)cin >> p[i];
    rep(i, n)cin >> q[i];

    vector<int> order(n);
    rep(i, n)order[i] = i + 1;
    int a = 0;
    int b = 0;
    int tmp = 1;
    do {
        bool isp = true;
        bool isq = true;
        rep(i, n) {
            if (p[i] != order[i])isp = false;
            if (q[i] != order[i])isq = false;
        }
        if (isp)a = tmp;
        if (isq)b = tmp;

        tmp++;
    } while (next_permutation(order.begin(), order.end()));

    cout << abs(a - b);

    return 0;
}