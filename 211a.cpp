#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //198
    double a, b;
    cin >> a >> b;
    double ans = (a - b) / 3 +b;

    cout << setprecision(10)<< ans << endl;
    return 0;
}