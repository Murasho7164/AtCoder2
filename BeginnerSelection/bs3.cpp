#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //bs
    string s; cin >> s;

    int count = 0;
    rep(i, s.length())
    {
        if (s[i] == '1') {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}