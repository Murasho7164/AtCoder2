#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //190
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)cout << "Takahashi" << endl;
    else if(a<b)cout << "Aoki" << endl;
    else if(c==1)cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}