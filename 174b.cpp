#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //174
    int n, d;
    cin >> n >> d;
    vector<double> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    
    int count = 0;
    rep(i, n) {
        if (sqrt(x[i] * x[i] + y[i] * y[i]) <= d)count++;
    }

    cout << count << endl;

    return 0;
}