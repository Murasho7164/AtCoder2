#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //208
    int a, b;
    cin >> a >> b;

    if (a <= b && b <= a * 6)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}