#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;



int main() {
    //215
    ll n; cin >> n;
    int k = 0;

    while (n >= pow(2, k)) {
        k++;
    }
    cout << k-1 << endl;

    return 0;
}