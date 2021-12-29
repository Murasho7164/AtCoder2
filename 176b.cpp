#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //176
    string n;
    cin >> n;
    int a = 0;

    rep(i, n.length()) {
        a += n[i] - '0';
    }

    if (a % 9 == 0)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}