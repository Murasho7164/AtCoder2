#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //135
    vector<int> a(3);
    rep(i, 3)cin >> a[i];

    sort(a.begin(), a.end());

    if (a[1] - a[0] == a[2] - a[1])cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}