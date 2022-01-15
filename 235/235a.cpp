#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;
const int INF = 100000000;

int main() {
    //235
    string a;
    cin >> a;
    vector<int> b(3);
    int sum = 0;
    rep(i, 3) {
        b[i] = a[i] - '0';
        sum += b[i];
    }
    int x = sum * 111;
    cout << x << endl;

    return 0;
}