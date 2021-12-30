#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //176
    int n; cin >> n;
    vector<string> s(n);
    rep(i, n)cin >> s[i];
    
    sort(s.begin(), s.end());


    int count = 1;
    rep(i, n - 1) {
        if (s[i] != s[i + 1])count++;
    }

    cout << count << endl;

    return 0;
}