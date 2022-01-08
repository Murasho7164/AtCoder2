#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;
int f(int x) {
    return x * x + 2 * x + 3;
}

int main() {
    //234
    int t; cin >> t;
    cout << f(f(f(t) + t) + f(f(t))) << endl;

    return 0;
}