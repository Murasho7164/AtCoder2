#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //232
    int n, m; cin >> n >> m;
    vector<P> ab(m), cd(m);
    rep(i, m) {
        cin >> ab.at(i).first >> ab.at(i).second;
    }
    rep(i, m) {
        cin >> cd.at(i).first >> cd.at(i).second;
    }

    vector<int> taka(n), aoki(n);
    rep(i, m) {
        taka.at(ab.at(i).first-1)++;
        taka.at(ab.at(i).second-1)++;

        aoki.at(cd.at(i).first-1)++;
        aoki.at(cd.at(i).second-1)++;
    }
    sort(taka.begin(), taka.end());
    sort(aoki.begin(), aoki.end());

    rep(i, n) {
        if (taka.at(i) != aoki.at(i)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}