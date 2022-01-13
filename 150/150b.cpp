#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //150
    int n; cin >> n;
    string s; cin >> s;
    int count = 0;
    rep(i, n - 2) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')count++;
    }

    cout << count << endl;

    return 0;
}