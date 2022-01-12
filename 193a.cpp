#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //193
    double a, b;
    cin >> a >> b;

    cout <<setprecision(10) << (a - b) / a * 100 << endl;

    return 0;
}