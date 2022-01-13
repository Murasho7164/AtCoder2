#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //216
    double a; cin >> a;
    if (a - (int)a < 0.3)cout << (int)a << '-' << endl;
    else if(a - (int)a < 0.7)cout << (int)a << endl;
    else cout << (int)a << '+' << endl;

    return 0;
}