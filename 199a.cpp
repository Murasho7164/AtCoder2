#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //199
    int a, b, c;
    cin >> a >> b >> c;

    if (a * a + b * b < c * c)cout << "Yes" << endl;
    else cout << "No" << endl;
   
    return 0;
}