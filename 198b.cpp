#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //198
    int n; cin >> n;
    while (n % 10 == 0&&n!=0)n /= 10;
    string a = to_string(n);
    string b = to_string(n);

    reverse(b.begin(), b.end());
    
    if (a == b)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}